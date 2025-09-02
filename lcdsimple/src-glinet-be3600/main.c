#include "lvgl/lvgl.h"
#include "lvgl/demos/lv_demos.h"
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

static const char *getenv_default(const char *name, const char *dflt)
{
    return getenv(name) ? : dflt;
}

#if LV_USE_LINUX_FBDEV
static void lv_linux_disp_init(void)
{
    const char *device = getenv_default("LV_LINUX_FBDEV_DEVICE", "/dev/fb0");
    lv_display_t * disp = lv_linux_fbdev_create();

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

void btn_event_cb(lv_event_t * e) {
    lv_obj_t * label = lv_event_get_user_data(e);
    lv_label_set_text(label, "Button Clicked!");
}

void lv_example_hello(void)
{
    /* 创建一个基础对象作为屏幕 */
    lv_obj_t *scr = lv_screen_active();
    
    /* 设置背景色为浅灰色 */
    lv_obj_set_style_bg_color(scr, lv_color_hex(0xf0f0f0), 0);
    
    /* 创建一个标签 */
    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_text(label, "Hello LVGL 9.2!");
    
    /* 居中标签 */
    lv_obj_center(label);
    
    /* 设置标签样式 */
    lv_obj_set_style_text_font(label, &lv_font_montserrat_24, 0);
    lv_obj_set_style_text_color(label, lv_color_hex(0x000000), 0);
    
    /* 添加一个旋转测试标记 */
    lv_obj_t *marker = lv_label_create(scr);
    lv_label_set_text(marker, "↑ Top");
    lv_obj_align(marker, LV_ALIGN_TOP_MID, 0, 10);
    
    /* 刷新显示 */
    lv_refr_now(NULL);
}

int main(void)
{
    lv_init();

    /*Linux display device init*/
    lv_linux_disp_init();
    lv_indev_init();

    /*Create a Demo*/
    //lv_demo_widgets();
    //lv_demo_widgets_start_slideshow();
    //lv_demo_flex_layout();
    lv_example_hello();

    /*Handle LVGL tasks*/
    while(1) {
        lv_timer_handler();
        usleep(5000);
    }

    return 0;
}
