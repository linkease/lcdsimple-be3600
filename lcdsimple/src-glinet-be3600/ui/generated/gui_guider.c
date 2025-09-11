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

void setup_ui(lv_ui *ui)
{
    setup_bottom_layer();
    init_scr_del_flag(ui);
    init_keyboard(ui);
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
void home_scr_update(void)
{
  char buf[256];
  char date_str[16], time_str[16];
  disk_info_t *disk;
  disk_label_t *disk_label;
  int i;
  monitor_info_t *info = get_monitor_info();
  lv_obj_add_flag(link_img, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(domestic_img, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(foreign_img, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(link_label, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(domestic_label, LV_OBJ_FLAG_HIDDEN);
  lv_obj_add_flag(foreign_label, LV_OBJ_FLAG_HIDDEN);

  if (!info->docker_ok) {
    lv_label_set_text(err_label, "Docker未运行");
  } else if (!info->linkease_ok) {
    lv_label_set_text(err_label, "易有云未运行");
  } else {
    lv_label_set_text(err_label, "iStoreOS");
  }

  get_date(date_str, time_str);
  lv_label_set_text(date_label, date_str);
  lv_label_set_text(time_label, time_str);

  if ('\0' == info->net_err[0]) {
    lv_obj_clear_flag(link_img, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_grid_cell(link_img, LV_GRID_ALIGN_START, 0, 1, LV_GRID_ALIGN_CENTER, 0, 2);
    lv_label_set_text(linkstatus_label, "已联网");

    lv_obj_clear_flag(domestic_img, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_grid_cell(domestic_img, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 0, 1);
  } else {
    lv_obj_clear_flag(link_label, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_grid_cell(link_label, LV_GRID_ALIGN_START, 0, 1, LV_GRID_ALIGN_CENTER, 0, 2);
    lv_label_set_text(linkstatus_label, info->net_err);

    lv_obj_clear_flag(domestic_label, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_grid_cell(domestic_label, LV_GRID_ALIGN_CENTER, 0, 1, LV_GRID_ALIGN_CENTER, 0, 1);
  }

  if (0 == info->foreign_link) {
    lv_obj_clear_flag(foreign_label, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_grid_cell(foreign_label, LV_GRID_ALIGN_CENTER, 3, 1, LV_GRID_ALIGN_CENTER, 0, 1);
  } else {
    lv_obj_clear_flag(foreign_img, LV_OBJ_FLAG_HIDDEN);
    lv_obj_set_grid_cell(foreign_img, LV_GRID_ALIGN_CENTER, 3, 1, LV_GRID_ALIGN_CENTER, 0, 1);
  }

  sprintf(buf, "%d", info->devices);
  lv_label_set_text(devices_label, buf);

  sprintf(buf, "IPv4: %s", info->ipv4);
  lv_label_set_text(ipv4_label, buf);

  sprintf(buf, "IPv6: %s", info->ipv6);
  lv_label_set_text(ipv6_label, buf);

  sprintf(buf, "DNS: %s", info->dns);
  lv_label_set_text(dns_label, buf);

  lv_label_set_text(up_label, info->uptime_human);
  lv_label_set_text(public_ipv4_label, info->public_ipv4);

  sprintf(buf, "%d%%", info->cpu);
  lv_label_set_text(cpu_label, buf);
  lv_arc_set_value(cpu_arc, 100-info->cpu);

  sprintf(buf, "%d℃", info->temperature);
  lv_label_set_text(temp_label, buf);
  if (info->temperature > 200) {
    i = 100;
  } else if (info->temperature > 100) {
    i = 90+(info->temperature-90)*10/100;
  } else {
    i = info->temperature;
  }
  lv_arc_set_value(temp_arc, 100-i);

  sprintf(buf, "%s/s", info->upload_str);
  lv_label_set_text(upload_label, buf);
  sprintf(buf, "%s/s", info->download_str);
  lv_label_set_text(download_label, buf);

  for(i = 0; i < 3; i++) {
    disk = &info->disks[i];
    disk_label = &disk_labels[i];
    if (disk->used_percent >= 0) {
      sprintf(buf, "%s:", disk->name);
      lv_label_set_text(disk_label->name, buf);
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
      lv_bar_set_value(disk_label->bar, 0, LV_ANIM_OFF); 
      lv_obj_set_style_bg_color(disk_label->bar, lv_color_make(185, 250, 90), LV_PART_INDICATOR);
    }
  }
}