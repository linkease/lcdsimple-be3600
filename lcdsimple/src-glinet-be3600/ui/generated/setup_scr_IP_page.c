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



void setup_scr_IP_page(lv_ui *ui)
{
    printf("setup ip page\n");
    //Write codes IP_page
    ui->IP_page = lv_obj_create(NULL);
    lv_obj_set_size(ui->IP_page, 284, 100);
    lv_obj_set_scrollbar_mode(ui->IP_page, LV_SCROLLBAR_MODE_OFF);

    //Write style for IP_page, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->IP_page, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->IP_page, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->IP_page, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_label_1
    ui->IP_page_label_1 = lv_label_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_label_1, 0, 0);
    lv_obj_set_size(ui->IP_page_label_1, 284, 76);
    lv_label_set_text(ui->IP_page_label_1, "");
    lv_label_set_long_mode(ui->IP_page_label_1, LV_LABEL_LONG_WRAP);

    //Write style for IP_page_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->IP_page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->IP_page_label_1, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->IP_page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->IP_page_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->IP_page_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->IP_page_label_1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->IP_page_label_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->IP_page_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_1
    ui->IP_page_img_1 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_1, 6, 8);
    lv_obj_set_size(ui->IP_page_img_1, 273, 64);
    lv_obj_add_flag(ui->IP_page_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_1, &_rect_RGB565A8_273x64);
    lv_image_set_pivot(ui->IP_page_img_1, 50,50);
    lv_image_set_rotation(ui->IP_page_img_1, 0);

    //Write style for IP_page_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_2
    ui->IP_page_img_2 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_2, 222, 38);
    lv_obj_set_size(ui->IP_page_img_2, 57, 34);
    lv_obj_add_flag(ui->IP_page_img_2, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_2, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->IP_page_img_2, 50,50);
    lv_image_set_rotation(ui->IP_page_img_2, 0);

    //Write style for IP_page_img_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_3
    ui->IP_page_img_3 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_3, 6, 38);
    lv_obj_set_size(ui->IP_page_img_3, 57, 34);
    lv_obj_add_flag(ui->IP_page_img_3, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_3, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->IP_page_img_3, 50,50);
    lv_image_set_rotation(ui->IP_page_img_3, 0);

    //Write style for IP_page_img_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_4
    ui->IP_page_img_4 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_4, 6, 8);
    lv_obj_set_size(ui->IP_page_img_4, 57, 34);
    lv_obj_add_flag(ui->IP_page_img_4, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_4, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->IP_page_img_4, 50,50);
    lv_image_set_rotation(ui->IP_page_img_4, 0);

    //Write style for IP_page_img_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_5
    ui->IP_page_img_5 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_5, 222, 8);
    lv_obj_set_size(ui->IP_page_img_5, 57, 34);
    lv_obj_add_flag(ui->IP_page_img_5, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_5, &_rect_RGB565A8_57x34);
    lv_image_set_pivot(ui->IP_page_img_5, 50,50);
    lv_image_set_rotation(ui->IP_page_img_5, 0);

    //Write style for IP_page_img_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_label_3
    ui->IP_page_label_3 = lv_label_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_label_3, 7, 23);
    lv_obj_set_size(ui->IP_page_label_3, 271, 45);
    lv_label_set_text(ui->IP_page_label_3, "");
    lv_label_set_long_mode(ui->IP_page_label_3, LV_LABEL_LONG_WRAP);

    //Write style for IP_page_label_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->IP_page_label_3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->IP_page_label_3, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->IP_page_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->IP_page_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->IP_page_label_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->IP_page_label_3, lv_color_hex(0x141126), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->IP_page_label_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->IP_page_label_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_6
    ui->IP_page_img_6 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_6, 7, 35);
    lv_obj_set_size(ui->IP_page_img_6, 57, 36);
    lv_obj_add_flag(ui->IP_page_img_6, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_6, &_black_rect_RGB565A8_57x36);
    lv_image_set_pivot(ui->IP_page_img_6, 50,50);
    lv_image_set_rotation(ui->IP_page_img_6, 0);

    //Write style for IP_page_img_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_7
    ui->IP_page_img_7 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_7, 221, 35);
    lv_obj_set_size(ui->IP_page_img_7, 57, 36);
    lv_obj_add_flag(ui->IP_page_img_7, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_7, &_black_rect_RGB565A8_57x36);
    lv_image_set_pivot(ui->IP_page_img_7, 50,50);
    lv_image_set_rotation(ui->IP_page_img_7, 0);

    //Write style for IP_page_img_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_img_8
    ui->IP_page_img_8 = lv_image_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_img_8, 42, 35);
    lv_obj_set_size(ui->IP_page_img_8, 200, 36);
    lv_obj_add_flag(ui->IP_page_img_8, LV_OBJ_FLAG_CLICKABLE);
    lv_image_set_src(ui->IP_page_img_8, &_black_rect_RGB565A8_200x36);
    lv_image_set_pivot(ui->IP_page_img_8, 50,50);
    lv_image_set_rotation(ui->IP_page_img_8, 0);

    //Write style for IP_page_img_8, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_image_recolor_opa(ui->IP_page_img_8, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_image_opa(ui->IP_page_img_8, 255, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_label_4
    ui->IP_page_label_4 = lv_label_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_label_4, 8, 7);
    lv_obj_set_size(ui->IP_page_label_4, 45, 18);
    lv_label_set_text(ui->IP_page_label_4, "IP 地址");
    lv_label_set_long_mode(ui->IP_page_label_4, LV_LABEL_LONG_WRAP);

    //Write style for IP_page_label_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->IP_page_label_4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->IP_page_label_4, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->IP_page_label_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->IP_page_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->IP_page_label_4, 3, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->IP_page_label_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_label_5
    ui->IP_page_label_5 = lv_label_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_label_5, 18, 51);
    lv_obj_set_size(ui->IP_page_label_5, 250, 11);
    lv_label_set_text(ui->IP_page_label_5, "IPv6 : xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:xxxx");
    lv_label_set_long_mode(ui->IP_page_label_5, LV_LABEL_LONG_WRAP);

    //Write style for IP_page_label_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->IP_page_label_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->IP_page_label_5, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->IP_page_label_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->IP_page_label_5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->IP_page_label_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_label_6
    ui->IP_page_label_6 = lv_label_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_label_6, 18, 33);
    lv_obj_set_size(ui->IP_page_label_6, 128, 9);
    lv_label_set_text(ui->IP_page_label_6, "IPv4 : 192.168.100.1");
    lv_label_set_long_mode(ui->IP_page_label_6, LV_LABEL_LONG_WRAP);

    //Write style for IP_page_label_6, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->IP_page_label_6, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->IP_page_label_6, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->IP_page_label_6, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->IP_page_label_6, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->IP_page_label_6, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes IP_page_label_7
    ui->IP_page_label_7 = lv_label_create(ui->IP_page);
    lv_obj_set_pos(ui->IP_page_label_7, 128, 33);
    lv_obj_set_size(ui->IP_page_label_7, 128, 9);
    lv_label_set_text(ui->IP_page_label_7, "DNS : 192.168.100.1");
    lv_label_set_long_mode(ui->IP_page_label_7, LV_LABEL_LONG_WRAP);

    //Write style for IP_page_label_7, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->IP_page_label_7, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->IP_page_label_7, &lv_font_SourceHanSansCN_Bold_10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->IP_page_label_7, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->IP_page_label_7, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->IP_page_label_7, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of IP_page.
    ui->curr_page = PAGE_1;

    //Update current screen layout.
    lv_obj_update_layout(ui->IP_page);

    //Init events for screen.
    events_init_IP_page(ui);
}
