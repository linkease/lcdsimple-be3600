#include "lvgl/lvgl.h"
//#include "lvgl/demos/lv_demos.h"
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include "cJSON.h"
#include "fetch_data.h"
#include "gui_guider.h"

#define DISP_BUF_SIZE (76*284)

lv_ui guider_ui = {0};
lv_timer_t *timer;
static void my_timer(lv_timer_t * _x);

static const char *getenv_default(const char *name, const char *dflt)
{
    return getenv(name) ? : dflt;
}

#if LV_USE_LINUX_FBDEV
static void lv_linux_disp_init(void)
{
    const char *device = getenv_default("LV_LINUX_FBDEV_DEVICE", "/dev/fb0");
    lv_display_t * disp = lv_linux_fbdev_create();

    static lv_color_t sbuf0[DISP_BUF_SIZE], sbuf1[DISP_BUF_SIZE];
    lv_display_set_buffers(disp,
         sbuf0,
         sbuf1,
         DISP_BUF_SIZE*sizeof(lv_color_t), 
         LV_DISPLAY_RENDER_MODE_PARTIAL);

    lv_display_set_physical_resolution(disp, 76, 284);
    lv_linux_fbdev_set_file(disp, device);
    lv_display_set_rotation(disp, LV_DISPLAY_ROTATION_90);
    //lv_linux_fbdev_set_unblank(disp);
    //lv_linux_fbdev_set_display(disp);
}
#elif LV_USE_LINUX_DRM
static void lv_linux_disp_init(void)
{
    const char *device = getenv_default("LV_LINUX_DRM_CARD", "/dev/dri/card0");
    lv_display_t * disp = lv_linux_drm_create();

    lv_linux_drm_set_file(disp, device, -1);
}
#elif LV_USE_SDL
static void lv_linux_disp_init(void)
{
    const int width = atoi(getenv("LV_SDL_VIDEO_WIDTH") ? : "800");
    const int height = atoi(getenv("LV_SDL_VIDEO_HEIGHT") ? : "480");

    lv_sdl_window_create(width, height);
}
#else
#error Unsupported configuration
#endif

static void lv_indev_init(void)
{
#if LV_USE_EVDEV
    lv_indev_t * indev = lv_evdev_create(LV_INDEV_TYPE_POINTER, "/dev/input/event0");
    lv_evdev_set_swap_axes(indev, true);
    lv_evdev_set_calibration(indev, 283, 0, 0, 75);
#endif
}

static monitor_info_t s_monitor_info2 = {0};
static monitor_info_t s_monitor_info3 = {0};
static pthread_mutex_t g_mutex = PTHREAD_MUTEX_INITIALIZER;
void *read_data_thread(void *arg) {
    int ret;
    while (1) {
        monitor_info_t *info = &s_monitor_info2; 
        if(info->request_cnt % 5 == 0) { 
            ret = read_info_from_shell(info, 1); 
        } else { 
            ret = read_info_from_shell(info, 0); 
        } 
        info->request_cnt++;
        if (0 == ret) {
            pthread_mutex_lock(&g_mutex);
            memcpy(&s_monitor_info3, info, sizeof(monitor_info_t));
            pthread_mutex_unlock(&g_mutex);
        }
        usleep(2000000);  // 2000ms
    }
}

extern void home_scr_update(lv_ui *ui, monitor_info_t *info);
static void my_timer(lv_timer_t * _x)
{
  (void)(_x);
  monitor_info_t *info = get_monitor_info();
  pthread_mutex_lock(&g_mutex);
  memcpy(info, &s_monitor_info3, sizeof(monitor_info_t));
  pthread_mutex_unlock(&g_mutex);
  home_scr_update(&guider_ui, info);
}

int main(void)
{
    lv_init();
    
    /*Linux display device init*/
    lv_linux_disp_init();
    lv_indev_init();

    setup_ui(&guider_ui);

    pthread_t thread;
    pthread_create(&thread, NULL, read_data_thread, NULL);

    timer = lv_timer_create(my_timer, 2000, NULL);

    /*Handle LVGL tasks*/
    while(1) {
        lv_timer_handler();
        usleep(1000);
    }

    return 0;
}
