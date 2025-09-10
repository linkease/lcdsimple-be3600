/*
* Copyright 2025 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "events_init.h"
#include <stdio.h>
#include "lvgl.h"

#if LV_USE_GUIDER_SIMULATOR && LV_USE_FREEMASTER
#include "freemaster_client.h"
#endif


static void First_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_active());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.IP_page, guider_ui.IP_page_del, &guider_ui.First_page_del, setup_scr_IP_page, LV_SCR_LOAD_ANIM_OVER_LEFT, 100, 100, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.last_page, guider_ui.last_page_del, &guider_ui.First_page_del, setup_scr_last_page, LV_SCR_LOAD_ANIM_OVER_RIGHT, 100, 100, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_First_page (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->First_page, First_page_event_handler, LV_EVENT_ALL, ui);
}

static void IP_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_active());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.ExNet_page, guider_ui.ExNet_page_del, &guider_ui.IP_page_del, setup_scr_ExNet_page, LV_SCR_LOAD_ANIM_OVER_LEFT, 100, 100, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.First_page, guider_ui.First_page_del, &guider_ui.IP_page_del, setup_scr_First_page, LV_SCR_LOAD_ANIM_OVER_RIGHT, 100, 100, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_IP_page (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->IP_page, IP_page_event_handler, LV_EVENT_ALL, ui);
}

static void ExNet_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_active());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.last_page, guider_ui.last_page_del, &guider_ui.ExNet_page_del, setup_scr_last_page, LV_SCR_LOAD_ANIM_OVER_LEFT, 100, 100, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.IP_page, guider_ui.IP_page_del, &guider_ui.ExNet_page_del, setup_scr_IP_page, LV_SCR_LOAD_ANIM_OVER_RIGHT, 100, 100, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_ExNet_page (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->ExNet_page, ExNet_page_event_handler, LV_EVENT_ALL, ui);
}

static void last_page_event_handler (lv_event_t *e)
{
    lv_event_code_t code = lv_event_get_code(e);
    switch (code) {
    case LV_EVENT_GESTURE:
    {
        lv_dir_t dir = lv_indev_get_gesture_dir(lv_indev_active());
        switch(dir) {
        case LV_DIR_LEFT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.First_page, guider_ui.First_page_del, &guider_ui.last_page_del, setup_scr_First_page, LV_SCR_LOAD_ANIM_OVER_LEFT, 100, 100, false, true);
            break;
        }
        case LV_DIR_RIGHT:
        {
            lv_indev_wait_release(lv_indev_active());
            ui_load_scr_animation(&guider_ui, &guider_ui.ExNet_page, guider_ui.ExNet_page_del, &guider_ui.last_page_del, setup_scr_ExNet_page, LV_SCR_LOAD_ANIM_OVER_RIGHT, 100, 100, false, true);
            break;
        }
        default:
            break;
        }
        break;
    }
    default:
        break;
    }
}

void events_init_last_page (lv_ui *ui)
{
    lv_obj_add_event_cb(ui->last_page, last_page_event_handler, LV_EVENT_ALL, ui);
}


void events_init(lv_ui *ui)
{

}
