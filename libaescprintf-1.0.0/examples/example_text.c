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

#include <aescprintf.h>


int main(void) {

  const char const *test_str = "Hello world" ;

  scfg_printf(normal, fg_red, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 1) ;
  scfg_printf(bold, fg_green, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 2) ;
  scfg_printf(dim, fg_yellow, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 3) ;
  scfg_printf(italic, fg_blue, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 4) ;
  scfg_printf(underline, fg_pink, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 5) ;
  scfg_printf(blink, fg_white, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 6) ;
  scfg_printf(inverted, fg_cyan, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 7) ;
  scfg_printf(hidden, fg_default, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 8) ;
  scfg_printf(strikethrough, fg_lightgray, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 9) ;

  scfgbg_fprintf(stdout, normal, fg_red, bg_yellow,  "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 10) ;
  scfgbg_fprintf(stdout, bold, fg_green, bg_cyan, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 11) ;
  scfgbg_fprintf(stdout, dim, fg_yellow, bg_red, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 12) ;
  scfgbg_fprintf(stdout, italic, fg_blue, bg_green, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 13) ;
  scfgbg_fprintf(stdout, underline, fg_pink, bg_blue,  "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 14) ;
  scfgbg_fprintf(stdout, blink, fg_white, bg_black, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 15) ;
  scfgbg_fprintf(stdout, inverted, fg_cyan, bg_green,  "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 16) ;
  scfgbg_fprintf(stdout, hidden, fg_default, bg_default, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 17) ;
  scfgbg_fprintf(stdout, strikethrough, fg_lightgray, bg_darkgray, "***** -=- %s -=- ***** style and color nb: %d\n", test_str, 18) ;

  scfgbg_fprintf(stdout, bold, fg_yellow, bg_blue,"********* -=- %s -=- *********\n", "libaescprintf is great !!!") ;

  return 0 ;

}
