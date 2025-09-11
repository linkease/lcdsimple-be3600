/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

enum Page {
    PAGE_0 = 0,
    PAGE_1 = 1,
    PAGE_2 = 2,
    PAGE_3 = 3
};

typedef struct
{
	lv_obj_t *First_page;
	bool First_page_del;
	lv_obj_t *First_page_label_1;
	lv_obj_t *First_page_label_2;
	lv_obj_t *First_page_label_3;
	lv_obj_t *First_page_label_4;
	lv_obj_t *First_page_label_5;
	lv_obj_t *First_page_img_1;
	lv_obj_t *First_page_label_6;
	lv_obj_t *First_page_label_7;
	lv_obj_t *First_page_img_2;
	lv_obj_t *First_page_img_3;
	lv_obj_t *First_page_label_8;
	lv_obj_t *First_page_label_9;
	lv_obj_t *IP_page;
	bool IP_page_del;
	lv_obj_t *IP_page_label_1;
	lv_obj_t *IP_page_img_1;
	lv_obj_t *IP_page_img_2;
	lv_obj_t *IP_page_img_3;
	lv_obj_t *IP_page_img_4;
	lv_obj_t *IP_page_img_5;
	lv_obj_t *IP_page_label_3;
	lv_obj_t *IP_page_img_6;
	lv_obj_t *IP_page_img_7;
	lv_obj_t *IP_page_img_8;
	lv_obj_t *IP_page_label_4;
	lv_obj_t *IP_page_label_5;
	lv_obj_t *IP_page_label_6;
	lv_obj_t *IP_page_label_7;
	lv_obj_t *ExNet_page;
	bool ExNet_page_del;
	lv_obj_t *ExNet_page_label_1;
	lv_obj_t *ExNet_page_img_1;
	lv_obj_t *ExNet_page_img_2;
	lv_obj_t *ExNet_page_img_3;
	lv_obj_t *ExNet_page_img_4;
	lv_obj_t *ExNet_page_img_5;
	lv_obj_t *ExNet_page_label_3;
	lv_obj_t *ExNet_page_img_6;
	lv_obj_t *ExNet_page_img_7;
	lv_obj_t *ExNet_page_img_8;
	lv_obj_t *ExNet_page_label_4;
	lv_obj_t *ExNet_page_label_5;
	lv_obj_t *ExNet_page_label_6;
	lv_obj_t *ExNet_page_label_8;
	lv_obj_t *ExNet_page_label_9;
	lv_obj_t *ExNet_page_label_10;
	lv_obj_t *ExNet_page_label_11;
	lv_obj_t *ExNet_page_label_12;
	lv_obj_t *ExNet_page_label_13;
	lv_obj_t *ExNet_page_label_14;
	lv_obj_t *ExNet_page_label_15;
	lv_obj_t *ExNet_page_img_9;
	lv_obj_t *ExNet_page_img_10;
	lv_obj_t *ExNet_page_label_16;
	lv_obj_t *ExNet_page_label_17;
	lv_obj_t *last_page;
	bool last_page_del;
	lv_obj_t *last_page_label_1;
	lv_obj_t *last_page_label_3;
	lv_obj_t *last_page_label_4;
	lv_obj_t *last_page_arc_1;
	lv_obj_t *last_page_arc_2;
	lv_obj_t *last_page_label_5;
	lv_obj_t *last_page_label_6;
	lv_obj_t *last_page_label_7;
	lv_obj_t *last_page_label_8;
	lv_obj_t *last_page_label_9;
	lv_obj_t *last_page_label_10;
	lv_obj_t *last_page_label_11;
	lv_obj_t *last_page_label_12;
	lv_obj_t *last_page_label_13;
	lv_obj_t *last_page_bar_1;
	lv_obj_t *last_page_bar_2;
	lv_obj_t *last_page_bar_3;
	lv_obj_t *last_page_label_14;
	lv_obj_t *last_page_dontouch;
	enum Page curr_page;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_screen_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, uint32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                  uint32_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                  lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_completed_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_bottom_layer(void);

void setup_ui(lv_ui *ui);

void video_play(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_First_page(lv_ui *ui);
void setup_scr_IP_page(lv_ui *ui);
void setup_scr_ExNet_page(lv_ui *ui);
void setup_scr_last_page(lv_ui *ui);
LV_IMAGE_DECLARE(_xuenze_RGB565A8_15x15);
LV_IMAGE_DECLARE(_cirle_back_RGB565A8_20x20);
LV_IMAGE_DECLARE(_file_RGB565A8_12x12);
LV_IMAGE_DECLARE(_rect_RGB565A8_273x64);
LV_IMAGE_DECLARE(_rect_RGB565A8_57x34);
LV_IMAGE_DECLARE(_black_rect_RGB565A8_57x36);
LV_IMAGE_DECLARE(_black_rect_RGB565A8_200x36);
LV_IMAGE_DECLARE(_black_xuanze_RGB565A8_13x13);

LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Normal_11)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Bold_13)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_11)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Bold_16)
LV_FONT_DECLARE(lv_font_SourceHanSansCN_Bold_10)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_12)
LV_FONT_DECLARE(lv_font_SourceHanSerifSC_Regular_10)


#ifdef __cplusplus
}
#endif
#endif
