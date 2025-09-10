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
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_ExNet_page(lv_ui *ui)
{
    //Write codes ExNet_page
    ui->ExNet_page = lv_obj_create(NULL);
    lv_obj_set_size(ui->ExNet_page, 284, 100);
    lv_obj_set_scrollbar_mode(ui->ExNet_page, LV_SCROLLBAR_MODE_OFF);

    //Write style for ExNet_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->ExNet_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ExNet_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ExNet_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_1
    ui->ExNet_page_label_1 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_1, 0, 0);
    lv_obj_set_size(ui->ExNet_page_label_1, 284, 76);
    lv_label_set_text(ui->ExNet_page_label_1, "");
    lv_label_set_long_mode(ui->ExNet_page_label_1, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ExNet_page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ExNet_page_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_1
    ui->ExNet_page_img_1 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_1, 6, 8);
    lv_obj_set_size(ui->ExNet_page_img_1, 273, 64);
    lv_obj_add_flag(ui->ExNet_page_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_1, &_rect_RGB565A8_273x64);
    lv_image_set_pivot(ui->ExNet_page_img_1, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_1, 0);

    //Write style for ExNet_page_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_2
    ui->ExNet_page_img_2 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_2, 222, 38);
    lv_obj_set_size(ui->ExNet_page_img_2, 57, 34);
    lv_obj_add_flag(ui->ExNet_page_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_2, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->ExNet_page_img_2, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_2, 0);

    //Write style for ExNet_page_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_3
    ui->ExNet_page_img_3 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_3, 6, 38);
    lv_obj_set_size(ui->ExNet_page_img_3, 57, 34);
    lv_obj_add_flag(ui->ExNet_page_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_3, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->ExNet_page_img_3, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_3, 0);

    //Write style for ExNet_page_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_4
    ui->ExNet_page_img_4 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_4, 6, 8);
    lv_obj_set_size(ui->ExNet_page_img_4, 57, 34);
    lv_obj_add_flag(ui->ExNet_page_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_4, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->ExNet_page_img_4, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_4, 0);

    //Write style for ExNet_page_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_5
    ui->ExNet_page_img_5 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_5, 222, 8);
    lv_obj_set_size(ui->ExNet_page_img_5, 57, 34);
    lv_obj_add_flag(ui->ExNet_page_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_5, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->ExNet_page_img_5, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_5, 0);

    //Write style for ExNet_page_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_3
    ui->ExNet_page_label_3 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_3, 7, 23);
    lv_obj_set_size(ui->ExNet_page_label_3, 271, 45);
    lv_label_set_text(ui->ExNet_page_label_3, "");
    lv_label_set_long_mode(ui->ExNet_page_label_3, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ExNet_page_label_3, lv_color_hex(0x141126), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ExNet_page_label_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_6
    ui->ExNet_page_img_6 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_6, 7, 35);
    lv_obj_set_size(ui->ExNet_page_img_6, 57, 36);
    lv_obj_add_flag(ui->ExNet_page_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_6, &_black_rect_RGB565A8_57x36);
    lv_image_set_pivot(ui->ExNet_page_img_6, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_6, 0);

    //Write style for ExNet_page_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_7
    ui->ExNet_page_img_7 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_7, 221, 35);
    lv_obj_set_size(ui->ExNet_page_img_7, 57, 36);
    lv_obj_add_flag(ui->ExNet_page_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_7, &_black_rect_RGB565A8_57x36);
    lv_image_set_pivot(ui->ExNet_page_img_7, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_7, 0);

    //Write style for ExNet_page_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_8
    ui->ExNet_page_img_8 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_8, 42, 35);
    lv_obj_set_size(ui->ExNet_page_img_8, 200, 36);
    lv_obj_add_flag(ui->ExNet_page_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_8, &_black_rect_RGB565A8_200x36);
    lv_image_set_pivot(ui->ExNet_page_img_8, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_8, 0);

    //Write style for ExNet_page_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_4
    ui->ExNet_page_label_4 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_4, 18, 7);
    lv_obj_set_size(ui->ExNet_page_label_4, 60, 18);
    lv_label_set_text(ui->ExNet_page_label_4, "外网网络状态");
    lv_label_set_long_mode(ui->ExNet_page_label_4, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_4, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_5
    ui->ExNet_page_label_5 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_5, 18, 51);
    lv_obj_set_size(ui->ExNet_page_label_5, 30, 11);
    lv_label_set_text(ui->ExNet_page_label_5, "域名 :");
    lv_label_set_long_mode(ui->ExNet_page_label_5, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_5, lv_color_hex(0xb7b5c3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_5, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_6
    ui->ExNet_page_label_6 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_6, 18, 33);
    lv_obj_set_size(ui->ExNet_page_label_6, 30, 9);
    lv_label_set_text(ui->ExNet_page_label_6, "IP :");
    lv_label_set_long_mode(ui->ExNet_page_label_6, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_6, lv_color_hex(0xb7b5c3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_6, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_8
    ui->ExNet_page_label_8 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_8, 53, 33);
    lv_obj_set_size(ui->ExNet_page_label_8, 80, 9);
    lv_label_set_text(ui->ExNet_page_label_8, "41.164.11.44");
    lv_label_set_long_mode(ui->ExNet_page_label_8, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_8, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_8, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_9
    ui->ExNet_page_label_9 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_9, 53, 52);
    lv_obj_set_size(ui->ExNet_page_label_9, 80, 9);
    lv_label_set_text(ui->ExNet_page_label_9, "default.com");
    lv_label_set_long_mode(ui->ExNet_page_label_9, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_9, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_9, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_9, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_10
    ui->ExNet_page_label_10 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_10, 178, 51);
    lv_obj_set_size(ui->ExNet_page_label_10, 29, 13);
    lv_label_set_text(ui->ExNet_page_label_10, "上传");
    lv_label_set_long_mode(ui->ExNet_page_label_10, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_10, lv_color_hex(0xb7b5c3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_10, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_10, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_11
    ui->ExNet_page_label_11 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_11, 178, 33);
    lv_obj_set_size(ui->ExNet_page_label_11, 29, 13);
    lv_label_set_text(ui->ExNet_page_label_11, "下载");
    lv_label_set_long_mode(ui->ExNet_page_label_11, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_11, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_11, lv_color_hex(0xb7b5c3), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_11, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_11, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_11, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_11, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_12
    ui->ExNet_page_label_12 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_12, 202, 52);
    lv_obj_set_size(ui->ExNet_page_label_12, 50, 9);
    lv_label_set_text(ui->ExNet_page_label_12, "1 KB/s");
    lv_label_set_long_mode(ui->ExNet_page_label_12, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_12, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_12, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_12, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_12, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_12, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_12, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_13
    ui->ExNet_page_label_13 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_13, 202, 34);
    lv_obj_set_size(ui->ExNet_page_label_13, 50, 9);
    lv_label_set_text(ui->ExNet_page_label_13, "1 KB/s");
    lv_label_set_long_mode(ui->ExNet_page_label_13, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_13, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_13, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_13, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_13, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_13, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_13, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_14
    ui->ExNet_page_label_14 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_14, 150, 13);
    lv_obj_set_size(ui->ExNet_page_label_14, 7, 6);
    lv_label_set_text(ui->ExNet_page_label_14, "");
    lv_label_set_long_mode(ui->ExNet_page_label_14, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_14, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_14, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_14, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_14, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_14, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ExNet_page_label_14, lv_color_hex(0x5ed7a2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ExNet_page_label_14, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_14, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_15
    ui->ExNet_page_label_15 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_15, 216, 12);
    lv_obj_set_size(ui->ExNet_page_label_15, 7, 6);
    lv_label_set_text(ui->ExNet_page_label_15, "");
    lv_label_set_long_mode(ui->ExNet_page_label_15, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_15, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_15, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_15, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_15, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_15, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->ExNet_page_label_15, lv_color_hex(0x5ed7a2), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->ExNet_page_label_15, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_15, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_9
    ui->ExNet_page_img_9 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_9, 147, 9);
    lv_obj_set_size(ui->ExNet_page_img_9, 13, 13);
    lv_obj_add_flag(ui->ExNet_page_img_9, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_9, &_black_xuanze_RGB565A8_13x13);
    lv_image_set_pivot(ui->ExNet_page_img_9, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_9, 0);

    //Write style for ExNet_page_img_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_img_10
    ui->ExNet_page_img_10 = lv_image_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_img_10, 213, 9);
    lv_obj_set_size(ui->ExNet_page_img_10, 13, 13);
    lv_obj_add_flag(ui->ExNet_page_img_10, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->ExNet_page_img_10, &_black_xuanze_RGB565A8_13x13);
    lv_image_set_pivot(ui->ExNet_page_img_10, 50,50);
    lv_image_set_rotation(ui->ExNet_page_img_10, 0);

    //Write style for ExNet_page_img_10, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->ExNet_page_img_10, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->ExNet_page_img_10, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_16
    ui->ExNet_page_label_16 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_16, 229, 7);
    lv_obj_set_size(ui->ExNet_page_label_16, 40, 16);
    lv_label_set_text(ui->ExNet_page_label_16, "谷歌连接");
    lv_label_set_long_mode(ui->ExNet_page_label_16, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_16, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_16, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_16, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_16, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_16, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_16, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_16, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes ExNet_page_label_17
    ui->ExNet_page_label_17 = lv_label_create(ui->ExNet_page);
    lv_obj_set_pos(ui->ExNet_page_label_17, 162, 7);
    lv_obj_set_size(ui->ExNet_page_label_17, 40, 16);
    lv_label_set_text(ui->ExNet_page_label_17, "百度连接");
    lv_label_set_long_mode(ui->ExNet_page_label_17, LV_LABEL_LONG_WRAP);

    //Write style for ExNet_page_label_17, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->ExNet_page_label_17, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->ExNet_page_label_17, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->ExNet_page_label_17, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->ExNet_page_label_17, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->ExNet_page_label_17, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->ExNet_page_label_17, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of ExNet_page.


    //Update current screen layout.
    lv_obj_update_layout(ui->ExNet_page);

    //Init events for screen.
    events_init_ExNet_page(ui);
}
