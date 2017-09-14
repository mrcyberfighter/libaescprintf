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

#include "./aescprintf.h"

// Style Color Foreground Background FILE Print Format
int scfgbg_fprintf(FILE *fp, style_t style, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  if ( ( (fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  if ( ( (bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;
  va_start(aq, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  fprintf(fp, ESC "[%02d;%02d;%02dm",  style, bg_color, fg_color) ;

  /** Else the problem is that the terminal print the background color until the line end.
    * Simply resetting doesn't solve the problem
    */

  char *fmt_str = strdup(fmt) ;

  bool switcher = false ;

  if (fmt_str[strlen(fmt)-1] == '\n') {

    // Construct format string without linefeed.
    fmt_str[strlen(fmt)-1]='\0' ;

    switcher = true ;

  }

  // Print format string without linefeed.
  int ret = vfprintf(fp, fmt_str, ap) ;


  free(fmt_str) ;


  va_end(ap) ;
  va_end(aq) ;



  fprintf(fp, RESET) ;


  if (switcher) {
    // Reset linefeed.
    fprintf(fp,"%c",'\n') ;
  }


  return ret ;

}

// Style Color Foreground Background Print Format
int scfgbg_printf(style_t style, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  if ( ( (fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  if ( ( (bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  printf(ESC "[%02d;%02d;%02dm",  style, bg_color, fg_color) ;

  /** Else the problem is that the terminal print the background color until the line end.
    * Simply resetting doesn't solve the problem
    */

  char *fmt_str = strdup(fmt) ;

  bool switcher = false ;

  if (fmt_str[strlen(fmt)-1] == '\n') {

    // Construct format string without linefeed.
    fmt_str[strlen(fmt)-1]='\0' ;

    switcher = true ;

  }

  // Print format string without linefeed.
  int ret = vprintf(fmt_str, ap) ;


  free(fmt_str) ;


  va_end(ap) ;
  va_end(aq) ;



  printf(RESET) ;


  if (switcher) {
    // Reset linefeed.
    printf("%c",'\n') ;
  }


  return ret ;

}

// Color Foreground Background FILE Print Format
int cfgbg_fprintf(FILE *fp, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...) {

  if ( ((fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  if ( ((bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) )  {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  fprintf(fp, ESC "[%02d;%02dm", bg_color, fg_color) ;

  /** Else the problem is that the terminal print the background color until the line end.
    * Simply resetting doesn't solve the problem
    */

  char *fmt_str = strdup(fmt) ;

  bool switcher = false ;

  if (fmt_str[strlen(fmt)-1] == '\n') {

    // Construct format string without linefeed.
    fmt_str[strlen(fmt)-1]='\0' ;

    switcher = true ;

  }

  // Print format string without linefeed.
  int ret = vfprintf(fp, fmt_str, ap) ;


  free(fmt_str) ;


  va_end(ap) ;
  va_end(aq) ;



  fprintf(fp, RESET) ;


  if (switcher) {
    // Reset linefeed.
    fprintf(fp,"%c",'\n') ;
  }


  return ret ;

}

// Color Foreground Background Print Format
int cfgbg_printf(fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...) {

  if ( ((fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  if ( ((bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) )  {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  printf(ESC "[%02d;%02dm", bg_color, fg_color) ;

  /** Else the problem is that the terminal print the background color until the line end.
    * Simply resetting doesn't solve the problem
    */

  char *fmt_str = strdup(fmt) ;

  bool switcher = false ;

  if (fmt_str[strlen(fmt)-1] == '\n') {

    // Construct format string without linefeed.
    fmt_str[strlen(fmt)-1]='\0' ;

    switcher = true ;

  }

  // Print format string without linefeed.
  int ret = vprintf(fmt_str, ap) ;


  free(fmt_str) ;


  va_end(ap) ;
  va_end(aq) ;



  printf(RESET) ;


  if (switcher) {
    // Reset linefeed.
    printf("%c",'\n') ;
  }


  return ret ;

}


// Color foreground FILE Print Format
int cfg_fprintf(FILE *fp, fg_color_t fg_color, const char *fmt, ...) {

  if ( ((fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }



  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  fprintf(fp, ESC "[%01d;%02dm", normal, fg_color) ;

  int ret = vfprintf(fp, fmt, ap) ;

  va_end(ap) ;
  va_end(aq) ;

  fprintf(fp, RESET) ;

  return ret ;

}

// Color foreground Print Format
int cfg_printf(fg_color_t fg_color, const char *fmt, ...) {

  if ( ((fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  printf(ESC "[%01d;%02dm", normal, fg_color) ;

  int ret = vprintf(fmt, ap) ;

  va_end(ap) ;
  va_end(aq) ;

  printf(RESET) ;

  return ret ;

}

// Color Background FILE Print Format
int cbg_fprintf(FILE *fp, bg_color_t bg_color, const char *fmt, ...) {


  if ( ((bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) )  {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  fprintf(fp, ESC "[%01d;%02dm", normal, bg_color) ;

  /** Else the problem is that the terminal print the background color until the line end.
    * Simply resetting doesn't solve the problem
    */

  char *fmt_str = strdup(fmt) ;

  bool switcher = false ;

  if (fmt_str[strlen(fmt)-1] == '\n') {

    // Construct format string without linefeed.
    fmt_str[strlen(fmt)-1]='\0' ;

    switcher = true ;

  }

  // Print format string without linefeed.
  int ret = vfprintf(fp, fmt_str, ap) ;


  free(fmt_str) ;


  va_end(ap) ;
  va_end(aq) ;



  fprintf(fp, RESET) ;


  if (switcher) {
    // Reset linefeed.
    fprintf(fp,"%c",'\n') ;
  }


  return ret ;

}

// Style Color Background FILE Print Format
int scbg_fprintf(FILE *fp, style_t style, bg_color_t bg_color, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  if ( ((bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) )  {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs



  fprintf(fp, ESC "[%02d;%02dm", style, bg_color) ;


  int ret = vfprintf(fp, fmt, ap) ;


  va_end(ap) ;
  va_end(aq) ;

  fprintf(fp, RESET) ;

  return ret ;

}

// Color Background Print Format
int cbg_printf(bg_color_t bg_color, const char *fmt, ...) {


  if ( ((bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) )  {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  printf(ESC "[%01d;%02dm", normal, bg_color) ;
  printf(ESC "[%01d;%02dm", normal, bg_color) ;
  /** Else the problem is that the terminal print the background color until the line end.
    * Simply resetting doesn't solve the problem
    */

  char *fmt_str = strdup(fmt) ;

  bool switcher = false ;

  if (fmt_str[strlen(fmt)-1] == '\n') {

    // Construct format string without linefeed.
    fmt_str[strlen(fmt)-1]='\0' ;

    switcher = true ;

  }

  // Print format string without linefeed.
  int ret = vprintf(fmt_str, ap) ;


  free(fmt_str) ;


  va_end(ap) ;
  va_end(aq) ;



  printf(RESET) ;


  if (switcher) {
    // Reset linefeed.
    printf("%c",'\n') ;
  }


  return ret ;

}

// Style FILE Print Format
int s_fprintf(FILE *fp, style_t style, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

  fprintf(fp, ESC "[%01dm", style) ;

  int ret = vfprintf(fp, fmt, ap) ;

  va_end(ap) ;
  va_end(aq) ;

  fprintf(fp, RESET) ;

  return ret ;

}

// Style Print Format
int s_printf(style_t style, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one need.

  printf(ESC "[%01dm", style) ;

  int ret = vprintf(fmt, ap) ;

  va_end(ap) ;
  va_end(aq) ;

  printf(RESET) ;

  return ret ;

}

// Style Color Foreground FILE Print Format
int scfg_fprintf(FILE *fp, style_t style, fg_color_t fg_color, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  if ( ( (fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  arg_err_msg(fp) ;

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs



  fprintf(fp, ESC "[%02d;%02dm", style, fg_color) ;


  int ret = vfprintf(fp, fmt, ap) ;


  va_end(ap) ;
  va_end(aq) ;

  fprintf(fp, RESET) ;

  return ret ;

}

// Style Color Foreground Print Format
int scfg_printf(style_t style, fg_color_t fg_color, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  if ( ( (fg_color < 30 || fg_color > 39) || fg_color == 38 ) && (fg_color < 90 || fg_color > 97) ) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument fg_color must be from type fg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs





  printf(ESC "[%02d;%02dm", style, fg_color) ;


  int ret = vprintf(fmt, ap) ;


  va_end(ap) ;
  va_end(aq) ;

  printf(RESET) ;

  return ret ;

}

// Style Color Foreground Print Format
int scbg_printf(style_t style, bg_color_t bg_color, const char *fmt, ...) {

  if (style < 0 || style > 9) {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument style must be from type style_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }


  if ( ((bg_color < 30+10 || bg_color > 39+10) || bg_color == 38+10) && (bg_color < 90+10 || bg_color > 97+10) )  {

    fprintf(stderr, RESET) ;

    fprintf(stderr,"%s:%s:%d\n" "argument bg_color must be from type bg_color_t !\n", __FILE__, __func__, __LINE__) ;

    return -1 ;
  }

  va_list ap, aq ;

  va_start(ap, fmt) ;

  va_copy(aq, ap); // __va_copy(aq, ap) ;
  // *aq = *ap; // Unfortunately, there are also systems that make it an array of pointers (of length 1), and there one needs

   printf(ESC "[%02d;%02dm", style, bg_color) ;


  int ret = vprintf(fmt, ap) ;


  va_end(ap) ;
  va_end(aq) ;

  printf(RESET) ;

  return ret ;

}

