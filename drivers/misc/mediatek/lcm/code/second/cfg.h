#ifndef __FIRST_LCM_INIT_CODE_H__
#define __FIRST_LCM_INIT_CODE_H__
#include "lcm_drv.h"

#define REGFLAG_DELAY 0xFF
#define REGFLAG_END_OF_TABLE 0xAA // END OF REGISTERS MARKER
//[BUGFIX]-Mod-BEGIN by SCDTABLET.jinghuang@tcl.com,11/26/2015,984836
//import OTP for lcd
static LCM_setting_table_V3 lcm_txd_initialization_setting_V3[] = {
{0x15, 0x00, 1, {0x00}},
{0x39, 0xFF, 3, {0x96,0x05,0x01}},
{0x15, 0x00, 1, {0x80}},
{0x39, 0xFF, 2, {0x96,0x05}},
{0x15, 0x00, 1, {0xB4}},
{0x15, 0xC0, 1, {0x50}},
{0x15, 0x00, 1, {0x89}},
{0x15, 0xC0, 1, {0x01}},
{0x15, 0x00, 1, {0xA0}},
{0x15, 0xC1, 1, {0x00}},
{0x15, 0x00, 1, {0x00}},
{0x15, 0xA0, 1, {0x00}},
{0x15, 0x00, 1, {0xA2}},
{0x39, 0xC0, 3, {0x01,0x10,0x00}},
{0x15, 0x00, 1, {0x90}},
{0x39, 0xC5, 2, {0x96,0x57}},
{0x15, 0x00, 1, {0x80}},
{0x39, 0xCB, 10, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0x90}},
{0x39, 0xCB, 15, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xA0}},
{0x39, 0xCB, 15, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xB0}},
{0x39, 0xCB, 10, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xC0}},
{0x39, 0xCB, 15, {0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xD0}},
{0x39, 0xCB, 15, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x04,0x04,0x04,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xE0}},
{0x39, 0xCB, 10, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xF0}},
{0x39, 0xCB, 10, {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF}},
{0x15, 0x00, 1, {0x80}},
{0x39, 0xCC, 10, {0x00,0x00,0x09,0x0B,0x01,0x25,0x26,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0x90}},
{0x39, 0xCC, 15, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0x0C,0x02}},
{0x15, 0x00, 1, {0xA0}},
{0x39, 0xCC, 15, {0x25,0x26,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xB0}},
{0x39, 0xCC, 10, {0x00,0x00,0x0C,0x0A,0x02,0x26,0x25,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xC0}},
{0x39, 0xCC, 15, {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0B,0x09,0x01}},
{0x15, 0x00, 1, {0xD0}},
{0x39, 0xCC, 15, {0x26,0x25,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0x80}},
{0x39, 0xCE, 12, {0x86,0x01,0x06,0x85,0x01,0x06,0x0F,0x00,0x00,0x0F,0x00,0x00}},
{0x15, 0x00, 1, {0x90}},
{0x39, 0xCE, 14, {0xF0,0x00,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,0xF0,0x00,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xA0}},
{0x39, 0xCE, 14, {0x18,0x05,0x03,0xC0,0x00,0x06,0x00,0x18,0x04,0x03,0xC1,0x00,0x06,0x00}},
{0x15, 0x00, 1, {0xB0}},
{0x39, 0xCE, 14, {0x18,0x03,0x03,0xC2,0x00,0x06,0x00,0x18,0x02,0x03,0xC3,0x00,0x06,0x00}},
{0x15, 0x00, 1, {0xC0}},
{0x39, 0xCE, 14, {0xF0,0x00,0x00,0x10,0x00,0x00,0x00,0xF0,0x00,0x00,0x10,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xD0}},
{0x39, 0xCE, 14, {0xF0,0x00,0x00,0x10,0x00,0x00,0x00,0xF0,0x00,0x00,0x10,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0x80}},
{0x39, 0xCF, 14, {0xF0,0x00,0x00,0x10,0x00,0x00,0x00,0xF0,0x00,0x00,0x10,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0x90}},
{0x39, 0xCF, 14, {0xF0,0x00,0x00,0x10,0x00,0x00,0x00,0xF0,0x00,0x00,0x10,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xA0}},
{0x39, 0xCF, 14, {0xF0,0x00,0x00,0x10,0x00,0x00,0x00,0xF0,0x00,0x00,0x10,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xB0}},
{0x39, 0xCF, 14, {0xF0,0x00,0x00,0x10,0x00,0x00,0x00,0xF0,0x00,0x00,0x10,0x00,0x00,0x00}},
{0x15, 0x00, 1, {0xC0}},
{0x39, 0xCF, 10, {0x02,0x02,0x10,0x10,0x00,0x00,0x01,0x81,0x00,0x08}},
{0x15, 0x00, 1, {0xA0}},
{0x39, 0xC4, 8, {0x3F,0x0F,0x94,0x9F,0x3F,0x09,0x94,0x00}},
{0x15, 0x00, 1, {0x90}},
{0x39, 0xF5, 6, {0x05,0x14,0x01,0x14,0x01,0x14}},
{0x15, 0x00, 1, {0xBA}},
{0x39, 0xF5, 2, {0x05,0x14}},
{0x15, 0x00, 1, {0x00}},
{0x39, 0xD8, 2, {0x5F,0x5F}},
//{0x15, 0x00, 1, {0x00}},
//{0x15, 0xD9, 1, {0x3a}},
{0x15, 0x00, 1, {0x00}},
{0x39, 0xE1, 16, {0x02,0x07,0x0c,0x0d,0x06,0x0d,0x0B,0x0a,0x04,0x07,0x0e,0x09,0x10,0x18,0x11,0x03}},
{0x15, 0x00, 1, {0x00}},
{0x39, 0xE2, 16, {0x02,0x07,0x0b,0x0c,0x05,0x0d,0x0B,0x0a,0x03,0x07,0x0d,0x09,0x0f,0x18,0x11,0x03}},
{0x15, 0x00, 1, {0xB1}},
{0x15, 0xC5, 1, {0x28}},
{0x15, 0x00, 1, {0x80}},
{0x15, 0xC4, 1, {0x9C}},
{0x15, 0x00, 1, {0x87}},
{0x15, 0xC4, 1, {0x40}},
{0x15, 0x00, 1, {0xC0}},
{0x15, 0xC5, 1, {0x00}},
{0x15, 0x00, 1, {0xB2}},
{0x39, 0xF5, 4, {0x15,0x00,0x15,0x00}},
{0x15, 0x00, 1, {0x93}},
{0x39, 0xC5, 3, {0x03,0x55,0x55}},
{0x15, 0x00, 1, {0x80}},
{0x39, 0xC1, 2, {0x36,0x66}},
{0x15, 0x00, 1, {0x89}},
{0x15, 0xC0, 1, {0x01}},
{0x15, 0x00, 1, {0xA0}},
{0x15, 0xC1, 1, {0x00}},
{0x15, 0x00, 1, {0xC5}},
{0x15, 0xB0, 1, {0x03}},
{0x15, 0x00, 1, {0xB8}},
{0x15, 0xB0, 1, {0x26}},
{0x15, 0x00, 1, {0xd2}},
{0x15, 0xB0, 1, {0x04}},
{0x15, 0x00, 1, {0x00}},
{0x39, 0xFF, 3, {0xFF,0xFF,0xFF}},
};
//[BUGFIX]-Mod-END by SCDTABLET.jinghuang@tcl.com

#endif