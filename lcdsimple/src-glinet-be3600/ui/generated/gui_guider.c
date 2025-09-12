/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "widgets_init.h"
#include "fetch_data.h"

void ui_init_style(lv_style_t * style)
{
    if (style->prop_cnt > 1)
        lv_style_reset(style);
    else
        lv_style_init(style);
}

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del)
{
    lv_obj_t * act_scr = lv_screen_active();

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "gg_external_data.h"
    if(auto_del) {
        gg_edata_task_clear(act_scr);
    }
#endif
    if (auto_del && is_clean) {
        lv_obj_clean(act_scr);
    }
    if (new_scr_del) {
        setup_scr(ui);
    }
    lv_screen_load_anim(*new_scr, anim_type, time, delay, auto_del);
    *old_scr_del = auto_del;
}

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb)
{
    lv_anim_t anim;
    lv_anim_init(&anim);
    lv_anim_set_var(&anim, var);
    lv_anim_set_exec_cb(&anim, exec_cb);
    lv_anim_set_values(&anim, start_value, end_value);
    lv_anim_set_time(&anim, duration);
    lv_anim_set_delay(&anim, delay);
    lv_anim_set_path_cb(&anim, path_cb);
    lv_anim_set_repeat_count(&anim, repeat_cnt);
    lv_anim_set_repeat_delay(&anim, repeat_delay);
    lv_anim_set_playback_time(&anim, playback_time);
    lv_anim_set_playback_delay(&anim, playback_delay);
    if (start_cb) {
        lv_anim_set_start_cb(&anim, start_cb);
    }
    if (ready_cb) {
        lv_anim_set_completed_cb(&anim, ready_cb);
    }
    if (deleted_cb) {
        lv_anim_set_deleted_cb(&anim, deleted_cb);
    }
    lv_anim_start(&anim);
}

void init_scr_del_flag(lv_ui *ui)
{

    ui->First_page_del = true;
    ui->IP_page_del = true;
    ui->ExNet_page_del = true;
    ui->last_page_del = true;
}

void setup_bottom_layer(void)
{
    lv_theme_apply(lv_layer_bottom());
}

const lv_font_t *font_shs_10b;
const lv_font_t *font_shs_13b;
const lv_font_t *font_shs_16b;
const lv_font_t *font_shs_10r;
const lv_font_t *font_shs_8b;
void lv_font_init(void)
{
    static lv_font_t* shs_10b;
    static lv_font_t* shs_13b;
    static lv_font_t* shs_16b;
    static lv_font_t* shs_10r;
    static lv_font_t* shs_8b;
    
    // Default scale factor if not defined
    int scale = 10;

    shs_10b = lv_freetype_font_create(FONT_PATH"SourceHanSansCN-Bold.otf",
                                     LV_FREETYPE_FONT_RENDER_MODE_BITMAP,
                                     10 * scale / 10,
                                     LV_FREETYPE_FONT_STYLE_NORMAL);
    shs_13b = lv_freetype_font_create(FONT_PATH"SourceHanSansCN-Bold.otf",
                                     LV_FREETYPE_FONT_RENDER_MODE_BITMAP,
                                     13 * scale / 10,
                                     LV_FREETYPE_FONT_STYLE_NORMAL);
    shs_16b = lv_freetype_font_create(FONT_PATH"SourceHanSansCN-Bold.otf",
                                     LV_FREETYPE_FONT_RENDER_MODE_BITMAP,
                                     16 * scale / 10,
                                     LV_FREETYPE_FONT_STYLE_NORMAL);
    shs_10r = lv_freetype_font_create(FONT_PATH"SourceHanSansCN-Normal.otf",
                                     LV_FREETYPE_FONT_RENDER_MODE_BITMAP,
                                     10 * scale / 10,
                                     LV_FREETYPE_FONT_STYLE_NORMAL);
    shs_8b = lv_freetype_font_create(FONT_PATH"SourceHanSansCN-Bold.otf",
                                    LV_FREETYPE_FONT_RENDER_MODE_BITMAP,
                                    8 * scale / 10,
                                    LV_FREETYPE_FONT_STYLE_NORMAL);

    font_shs_10b = shs_10b;
    font_shs_13b = shs_13b;
    font_shs_16b = shs_16b;
    font_shs_10r = shs_10r;
    font_shs_8b = shs_8b;
}

void setup_ui(lv_ui *ui)
{
    setup_bottom_layer();
    init_scr_del_flag(ui);
    init_keyboard(ui);
    lv_font_init();
    setup_scr_First_page(ui);
    lv_screen_load(ui->First_page);
}

void video_play(lv_ui *ui)
{

}

void init_keyboard(lv_ui *ui)
{

}

static void get_date(char* date, char* time);
void scr_update_page1(lv_ui *ui, monitor_info_t* info) { 
    char buf[256]; 
    char date_str[16], time_str[16]; 
    
    /* if (!info->docker_ok) { 
        lv_label_set_text(ui->First_page_label_2, "Docker未运行"); 
    } else if (!info->linkease_ok) { 
        lv_label_set_text(ui->First_page_label_2, "易有云未运行"); 
    } else { 
        lv_label_set_text(ui->First_page_label_2, "iStoreOS"); 
    } */

    if('\0' == info->net_err[0]) {
        lv_label_set_text(ui->First_page_label_6, "已联网");
        lv_obj_clear_flag(ui->First_page_img_1, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_label_set_text(ui->First_page_label_6, info->net_err);
        lv_obj_add_flag(ui->First_page_img_1, LV_OBJ_FLAG_HIDDEN);
    }
    get_date(date_str, time_str);
    lv_label_set_text(ui->First_page_label_4, time_str);
    lv_label_set_text(ui->First_page_label_5, date_str); 
    lv_label_set_text(ui->First_page_label_7, info->uptime_human);
    
    sprintf(buf, "%d", info->devices); 
    lv_label_set_text(ui->First_page_label_9, buf); 
    
}

void scr_update_page2(lv_ui *ui, monitor_info_t* info) {
    char buf[256]; 
    sprintf(buf, "IPv4: %s", info->ipv4);
    lv_label_set_text(ui->IP_page_label_6, buf); 

    sprintf(buf, "IPv6: %s", info->ipv6); 
    lv_label_set_text(ui->IP_page_label_5, buf);
    
    sprintf(buf, "DNS: %s", info->dns); 
    lv_label_set_text(ui->IP_page_label_7, buf);
}

void scr_update_page3(lv_ui *ui, monitor_info_t* info) { 
    char buf[256]; 
    sprintf(buf, "%s/s", info->upload_str); 
    lv_label_set_text(ui->ExNet_page_label_12, buf); 
    sprintf(buf, "%s/s", info->download_str); 
    lv_label_set_text(ui->ExNet_page_label_13, buf); 
    lv_label_set_text(ui->ExNet_page_label_8, info->public_ipv4);
    lv_label_set_text(ui->ExNet_page_label_9, info->domain);

    if('\0' == info->net_err[0]) {
        lv_obj_clear_flag(ui->ExNet_page_img_9, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_add_flag(ui->ExNet_page_img_9, LV_OBJ_FLAG_HIDDEN);
    }

    if (0 == info->foreign_link) { 
        lv_obj_add_flag(ui->ExNet_page_img_10, LV_OBJ_FLAG_HIDDEN);
    } else { 
        lv_obj_clear_flag(ui->ExNet_page_img_10, LV_OBJ_FLAG_HIDDEN);
    }
}

static void simplify_size(char *input, char *output) {
    int i = 0;
    int j = 0;
    
    while (input[i] != '\0' && !isalpha(input[i])) {
        if (input[i] == '.') {
            break;
        }
        output[j++] = input[i++];
    }
    
    while (input[i] != '\0' && !isalpha(input[i])) {
        i++;
    }
    
    if (input[i] != '\0') {
        output[j++] = toupper(input[i]);
    }
    
    output[j] = '\0';
}

void scr_update_page4(lv_ui *ui, monitor_info_t* info) {
    char buf[256]; 
    int i; 
    disk_info_t *disk; 
    disk_label_t *disk_label;
    disk_label_t disk_labels[3] = {0};

    sprintf(buf, "%d%%", info->cpu); 
    lv_label_set_text(ui->last_page_label_14, buf);
    lv_arc_set_value(ui->last_page_arc_2, info->cpu*360/100); 
    
    sprintf(buf, "%d℃", info->temperature); 
    lv_label_set_text(ui->last_page_label_7, buf);
    if (info->temperature > 200) { 
        i = 100; 
    } else if (info->temperature > 100) { 
        i = 90+(info->temperature-90)*10/100; 
    } else { 
        i = info->temperature; 
    } 
    lv_arc_set_value(ui->last_page_arc_1, i*360/100); 
    
    disk_labels[0].name = ui->last_page_label_8;
    disk_labels[0].used = ui->last_page_label_13;
    disk_labels[0].bar = ui->last_page_bar_3;

    disk_labels[1].name = ui->last_page_label_9;
    disk_labels[1].used = ui->last_page_label_12;
    disk_labels[1].bar = ui->last_page_bar_2;

    disk_labels[2].name = ui->last_page_label_10;
    disk_labels[2].used = ui->last_page_label_11;
    disk_labels[2].bar = ui->last_page_bar_1;

   for(i = 0; i < 3; i++) { 
        disk = &info->disks[i]; 
        disk_label = &disk_labels[i]; 
        if (disk->used_percent >= 0) { 
            sprintf(buf, "%s:", disk->name); 
            lv_label_set_text(disk_label->name, buf); 
            simplify_size(disk->used, disk->used);
            simplify_size(disk->total, disk->total);
            sprintf(buf, "%s/%s", disk->used, disk->total); 
            lv_label_set_text(disk_label->used, buf); 
            lv_bar_set_value(disk_label->bar, disk->used_percent, LV_ANIM_OFF); 
            if (disk->used_percent < 60) { 
                lv_obj_set_style_bg_color(disk_label->bar, lv_color_make(84, 216, 167), LV_PART_INDICATOR); 
            } else { 
                lv_obj_set_style_bg_color(disk_label->bar, lv_color_make(250, 185, 90), LV_PART_INDICATOR); 
            } 
        } else { 
            sprintf(buf, "硬盘%d:", i+1); 
            lv_label_set_text(disk_label->used, "---/---"); 
            lv_bar_set_value(disk_label->bar, 0, LV_ANIM_OFF); lv_obj_set_style_bg_color(disk_label->bar, lv_color_make(185, 250, 90), LV_PART_INDICATOR); 
        } 
    }
}

void home_scr_update(lv_ui *ui, monitor_info_t* info)
{
    enum Page curr = ui->curr_page;
    if (curr == PAGE_1) {
        //printf("first page\n");
        scr_update_page1(ui, info);
    } else if(curr == PAGE_2) {
        //printf("ip page\n");
        scr_update_page2(ui, info);
    } else if(curr == PAGE_3) {
        //printf("net page\n");
        scr_update_page3(ui, info);
    } else if(curr == PAGE_4) {
        //printf("last page\n");
        scr_update_page4(ui, info);
    }
}

static void get_date(char* date_str, char* time_str)
{
    time_t now = time(NULL);
    now += 8*3600; // // 加上 8 小时
    //struct tm *local = localtime(&now);
    struct tm *utc_time = gmtime(&now);

    strftime(date_str, 16, "%Y-%m-%d", utc_time);
    strftime(time_str, 16, "%H:%M", utc_time);
}