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



void setup_scr_First_page(lv_ui *ui)
{
    printf("setup first page\n");
    //Write codes First_page
    ui->First_page = lv_obj_create(NULL);
    lv_obj_set_size(ui->First_page, 284, 100);
    lv_obj_set_scrollbar_mode(ui->First_page, LV_SCROLLBAR_MODE_OFF);

    //Write style for First_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->First_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->First_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->First_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_1
    ui->First_page_label_1 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_1, 0, 0);
    lv_obj_set_size(ui->First_page_label_1, 284, 76);
    lv_label_set_text(ui->First_page_label_1, "");
    lv_label_set_long_mode(ui->First_page_label_1, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->First_page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->First_page_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_2
    ui->First_page_label_2 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_2, 6, 5);
    lv_obj_set_size(ui->First_page_label_2, 90, 11);
    lv_label_set_text(ui->First_page_label_2, "错误信息提示区域");
    lv_label_set_long_mode(ui->First_page_label_2, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_2, &lv_font_SourceHanSansCN_Normal_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_3
    ui->First_page_label_3 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_3, 6, 21);
    lv_obj_set_size(ui->First_page_label_3, 272, 49);
    lv_label_set_text(ui->First_page_label_3, "");
    lv_label_set_long_mode(ui->First_page_label_3, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->First_page_label_3, lv_color_hex(0x141126), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->First_page_label_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_4
    ui->First_page_label_4 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_4, 97, 5);
    lv_obj_set_size(ui->First_page_label_4, 90, 11);
    lv_label_set_text(ui->First_page_label_4, "12：09");
    lv_label_set_long_mode(ui->First_page_label_4, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_4, &lv_font_SourceHanSansCN_Normal_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_5
    ui->First_page_label_5 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_5, 221, 5);
    lv_obj_set_size(ui->First_page_label_5, 60, 11);
    lv_label_set_text(ui->First_page_label_5, "2025.12.31");
    lv_label_set_long_mode(ui->First_page_label_5, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_5, &lv_font_SourceHanSansCN_Normal_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_img_1
    ui->First_page_img_1 = lv_image_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_img_1, 15, 38);
    lv_obj_set_size(ui->First_page_img_1, 15, 15);
    lv_obj_add_flag(ui->First_page_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->First_page_img_1, &_xuenze_RGB565A8_15x15);
    lv_image_set_pivot(ui->First_page_img_1, 50,50);
    lv_image_set_rotation(ui->First_page_img_1, 0);

    //Write style for First_page_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->First_page_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->First_page_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_6
    ui->First_page_label_6 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_6, 38, 21);
    lv_obj_set_size(ui->First_page_label_6, 48, 23);
    lv_label_set_text(ui->First_page_label_6, "已联网");
    lv_label_set_long_mode(ui->First_page_label_6, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_6, font_shs_13b, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_6, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_6, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_7
    ui->First_page_label_7 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_7, 30, 42);
    lv_obj_set_size(ui->First_page_label_7, 100, 20);
    lv_label_set_text(ui->First_page_label_7, "1小时28分51秒");
    lv_label_set_long_mode(ui->First_page_label_7, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_7, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_7, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_7, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_img_2
    ui->First_page_img_2 = lv_image_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_img_2, 172, 34);
    lv_obj_set_size(ui->First_page_img_2, 20, 20);
    lv_obj_add_flag(ui->First_page_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->First_page_img_2, &_cirle_back_RGB565A8_20x20);
    lv_image_set_pivot(ui->First_page_img_2, 50,50);
    lv_image_set_rotation(ui->First_page_img_2, 0);

    //Write style for First_page_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->First_page_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->First_page_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_img_3
    ui->First_page_img_3 = lv_image_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_img_3, 176, 38);
    lv_obj_set_size(ui->First_page_img_3, 12, 12);
    lv_obj_add_flag(ui->First_page_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->First_page_img_3, &_file_RGB565A8_12x12);
    lv_image_set_pivot(ui->First_page_img_3, 50,50);
    lv_image_set_rotation(ui->First_page_img_3, 0);

    //Write style for First_page_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->First_page_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->First_page_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_8
    ui->First_page_label_8 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_8, 183, 42);
    lv_obj_set_size(ui->First_page_label_8, 89, 24);
    lv_label_set_text(ui->First_page_label_8, "已连接设备");
    lv_label_set_long_mode(ui->First_page_label_8, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_8, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_8, &lv_font_SourceHanSerifSC_Regular_11, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_8, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_8, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes First_page_label_9
    ui->First_page_label_9 = lv_label_create(ui->First_page);
    lv_obj_set_pos(ui->First_page_label_9, 198, 21);
    lv_obj_set_size(ui->First_page_label_9, 16, 32);
    lv_label_set_text(ui->First_page_label_9, "4");
    lv_label_set_long_mode(ui->First_page_label_9, LV_LABEL_LONG_WRAP);

    //Write style for First_page_label_9, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->First_page_label_9, lv_color_hex(0xf9ba2d), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->First_page_label_9, &lv_font_SourceHanSansCN_Bold_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->First_page_label_9, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->First_page_label_9, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->First_page_label_9, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->First_page_label_9, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->First_page_label_9, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of First_page.
    ui->curr_page = PAGE_1;

    //Update current screen layout.
    lv_obj_update_layout(ui->First_page);

    //Init events for screen.
    events_init_First_page(ui);
}
