/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Custom Bitmap for splashscreen
 *
 * You may use one of the following tools to generate the C++ bitmap array from
 * a black and white image:
 *
 *  - http://www.marlinfw.org/tools/u8glib/converter.html
 *  - http://www.digole.com/tools/PicturetoC_Hex_converter.php
 */
#include <avr/pgmspace.h>

#define CUSTOM_BOOTSCREEN_TIMEOUT   2500
#define CUSTOM_BOOTSCREEN_BMPWIDTH  64
#define CUSTOM_BOOTSCREEN_BMPHEIGHT 64

const unsigned char custom_start_bmp[] PROGMEM = {
  0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00
,0x00,0x00,0x00,0x00,0x00,0x0c,0x80,0x00
,0x00,0x00,0x00,0x00,0x00,0x11,0x40,0x00
,0x00,0x60,0x00,0x0f,0xf8,0x21,0xa0,0x00
,0x00,0x90,0x01,0xf0,0x07,0x4c,0xd0,0x00
,0x01,0x08,0x0e,0x0f,0xf8,0x9a,0x68,0x00
,0x01,0x64,0x31,0xff,0xc7,0x07,0x24,0x00
,0x02,0x64,0xcf,0xff,0xff,0xf3,0xb4,0x00
,0x02,0x75,0x3f,0xff,0xff,0xfc,0x5a,0x00
,0x02,0xb6,0xff,0xff,0xff,0xdf,0x89,0x00
,0x04,0x95,0xf7,0xff,0xff,0xef,0xe4,0x80
,0x05,0x93,0xf7,0xdf,0xff,0xf7,0xf8,0x40
,0x05,0x93,0xef,0xdf,0xff,0xfb,0xee,0x60
,0x09,0x1b,0xdf,0xbf,0xff,0xfb,0xf1,0x90
,0x08,0x1b,0xbf,0xbf,0xff,0xfd,0xf8,0x68
,0x0b,0x99,0xbf,0xbe,0xff,0xfe,0xfc,0x90
,0x0b,0x89,0x7f,0x7c,0xff,0xfe,0xfc,0x50
,0x17,0xcd,0x7f,0x7c,0xff,0xff,0x7e,0xa0
,0x17,0xcc,0xff,0x7d,0x7f,0xff,0x7e,0xa0
,0x17,0xc4,0xff,0x7d,0x7e,0xff,0xbe,0x40
,0x2f,0xe5,0xfe,0xfb,0x7f,0x7f,0xbf,0x40
,0x2f,0xf5,0xfe,0xfb,0xbf,0x7f,0xdf,0xa0
,0x2f,0xf5,0xfe,0xfb,0xbf,0x3c,0x5f,0xa0
,0x2f,0xf5,0xfe,0xfb,0xdf,0x53,0x8f,0x90
,0x2f,0xe5,0xfe,0xf7,0xdf,0x6f,0xe3,0xd0
,0x5f,0xed,0xfe,0xc0,0xdf,0xb7,0xef,0xd0
,0x5f,0xe9,0xfe,0x37,0xef,0xbb,0xef,0xd0
,0x5f,0xcb,0xfc,0xef,0xef,0xbd,0xf7,0xe8
,0x5f,0xcb,0xfa,0xef,0xf7,0xbe,0xf7,0xe8
,0x5f,0xdb,0xf6,0xef,0xfb,0xdf,0x77,0xe8
,0x5f,0xdb,0xee,0xdf,0xfb,0xdd,0xb7,0xe8
,0x5f,0x93,0xfe,0xdf,0xfd,0xdb,0x17,0xf4
,0xbf,0x93,0xfe,0xbc,0x7e,0x6c,0xe5,0xf4
,0xbf,0xb3,0xff,0x3f,0xff,0xa8,0x73,0xf4
,0xbf,0xb3,0xff,0x30,0xff,0xd0,0x39,0xf4
,0xbf,0x2b,0xff,0x40,0x3f,0xe0,0xbb,0xf4
,0xbf,0x2b,0xff,0x20,0x9f,0xf0,0x3b,0xd4
,0xbf,0x0b,0xfd,0x60,0x7f,0xf0,0x33,0xa8
,0x3f,0x7d,0xfe,0x20,0x7f,0xfa,0xbb,0xb0
,0x7f,0x7d,0xfe,0x82,0x7f,0xfa,0xbb,0x50
,0x7f,0x7d,0xff,0x80,0x7f,0xfb,0xbb,0x50
,0x7f,0x3d,0xbf,0x81,0x7f,0xfc,0x7a,0x68
,0x7e,0x5a,0x9f,0x91,0x7f,0xff,0xd5,0x68
,0x7e,0x5a,0xaf,0x8f,0x7f,0xf7,0x53,0x68
,0x7e,0x68,0xa7,0xd0,0xff,0xff,0x73,0x68
,0xfe,0x51,0x69,0xef,0xff,0xff,0xfb,0x68
,0xfe,0x4a,0x0e,0x6d,0x7f,0xff,0xfb,0x74
,0xfe,0x45,0xf7,0x95,0x7f,0xff,0xfb,0x74
,0xfd,0x82,0xf7,0xaf,0xff,0xff,0xf6,0xb4
,0xfd,0x02,0xc3,0xbf,0xff,0xff,0xe6,0xb4
,0xfd,0x01,0x3b,0xdf,0xff,0xef,0xd6,0xda
,0xfd,0x01,0x55,0xdf,0xfd,0xdf,0xb6,0xda
,0xfa,0x80,0x8d,0xdf,0xfe,0x3f,0x56,0xea
,0xfa,0x80,0x60,0xef,0xff,0xfe,0x95,0x6d
,0xfa,0x80,0x1c,0xe3,0xff,0xfd,0x15,0x6d
,0xf6,0x80,0x0b,0x6c,0x3f,0xf2,0x15,0x75
,0xf6,0x80,0x17,0xb7,0xc3,0xec,0x15,0x76
,0xf5,0x00,0x17,0x50,0xfc,0x10,0x0b,0x7a
,0xf5,0x00,0x2e,0xcb,0xfe,0x60,0x0b,0x7a
,0xed,0x00,0x29,0xa7,0xfe,0xa0,0x04,0xbb
,0xed,0x00,0x56,0xb7,0xfe,0x90,0x00,0xbd
,0xed,0x00,0xa9,0x79,0xfe,0x68,0x00,0xbd
,0xda,0x00,0x52,0xfe,0x7e,0x76,0x00,0xbe
,0xda,0x00,0x25,0xff,0x9e,0xf9,0x00,0xbe
};
