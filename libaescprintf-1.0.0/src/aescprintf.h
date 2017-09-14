/** libaescprintf: ANSI Escape Sequences Color Print Format for styled ouput.
  * Copyright (C) 2017 Brüggemannn Eddie.
  *
  * This library is free software: you can redistribute it and/or modify
  * it under the terms of the GNU Lesser General Public License as published
  * by the Free Software Foundation, either version 3 of the License, or
  * (at your option) any later version.

  * This library is distributed in the hope that it will be useful,
  * but WITHOUT ANY WARRANTY; without even the implied warranty of
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  * GNU General Public License for more details.
  *
  * You should have received a copy of the GNU Lesser General Public License
  * along with this library.  If not, see <http://www.gnu.org/licenses/>.
  *
  ***************************************************************************/
 
#ifndef LIBAESCPRINTF_1_0_0_HH /** Inclusion guard **/
#define LIBAESCPRINTF_1_0_0_HH

//#include "../config.h"

#if 0
#ifndef _GNU_SOURCE
#define _GNU_SOURCE   // Make an alternative without vasprintf
#endif
#endif

#include <stdio.h>    // For vasprintf
#include <stdarg.h>   // For va_arg, va_copy, va_end, va_list, va_start
#include <stdbool.h>  // For bool type.
#include <string.h>   // for strlen, strcpy,
#include <stdlib.h>   // for free and malloc

// Reading this file will be useful:
#include "./aescprintf_defines.h"

/* Définition of macro EXTERN_C for C++ compatibility */
#ifndef EXTERN_C
#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C extern
#endif
#endif



/** libaescprintf: ANSI Escape Sequences Color printf
  *
  * A mini color printing library based on ANSI escape sequences (instead of termcap.h unfortunately)
  *
  * It should work on most terminals,
  * it work fully on xterm and ANSI escape sequences
  * compliant terminals as terminals build with libvte-2.91.
  *
  ***************************************************************************************************/

#define AESCPRINTF_VERSION_MAJOR (1)
#define AESCPRINTF_VERSION_MINOR (0)
#define AESCPRINTF_VERSION_MICRO (0)


// Style Foreground Background FILE printf
EXTERN_C int scfgbg_fprintf(FILE *fp, style_t style, fg_color_t color, bg_color_t bgcolor, const char *fmt, ...) ;

// Color Foreground Background FILE printf
EXTERN_C int cfgbg_fprintf(FILE *fp, fg_color_t color, bg_color_t bgcolor, const char *fmt, ...) ;

// Color foreground FILE printf
EXTERN_C int cfg_fprintf(FILE *fp, fg_color_t color, const char *fmt, ...) ;

// Color Background FILE printf
EXTERN_C int cbg_fprintf(FILE *fp, bg_color_t bgcolor, const char *fmt, ...) ;

// Style FILE printf
EXTERN_C int s_fprintf(FILE *fp, style_t style, const char *fmt, ...) ;

// Style Color Foreground FILE printf
EXTERN_C int scfg_fprintf(FILE *fp, style_t style, fg_color_t fg_color, const char *fmt, ...) ;

// Style Color Background FILE printf
EXTERN_C int scbg_fprintf(FILE *fp, style_t style, bg_color_t bg_color, const char *fmt, ...) ;

/** printf versions **/

// Style Color Foreground Background printf
EXTERN_C int scfgbg_printf(style_t style, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...) ;

// Color Foreground Background printf
EXTERN_C int cfgbg_printf(fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...) ;

// Color foreground printf
EXTERN_C int cfg_printf(fg_color_t fg_color, const char *fmt, ...) ;

// Color Background printf
EXTERN_C int cbg_printf(bg_color_t bg_color, const char *fmt, ...) ;

// Style printf
EXTERN_C int s_printf(style_t style, const char *fmt, ...) ;

// Style Color Foreground printf
EXTERN_C int scfg_printf(style_t style, fg_color_t fg_color, const char *fmt, ...) ;

EXTERN_C int scbg_printf(style_t style, bg_color_t bg_color, const char *fmt, ...) ;

#endif /** Inclusion guard **/
