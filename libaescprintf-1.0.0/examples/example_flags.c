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

void print_flag_horizontal(bg_color_t first_col_color, bg_color_t second_col_color, bg_color_t third_col_color) {

  int width = 26 ;

  for (int c = 0 ; c < 24 ; ++c) {


    cbg_fprintf(stdout, bg_default,"%s", "  ") ;

    for (int cc=0 ; cc < width ; ++cc) {

      cbg_fprintf(stdout, first_col_color, "%s", " ") ;

    }

    for (int cc=0 ; cc < width ; ++cc) {

      cbg_fprintf(stdout, second_col_color, "%s", " ") ;

    }

    for (int cc=0 ; cc < width ; ++cc) {

      cbg_fprintf(stdout, third_col_color, "%s", " ") ;

    }

  }

  return ;

}

void print_flag_vertical(bg_color_t first_row_color, bg_color_t second_row_color, bg_color_t third_row_color) {

  int width = 24/3 ;

  for (int c = 0 ; c < 24 ; ++c) {

    if (c <= width * 1 - 1) {

      for (int cc = 0 ; cc < 80 ; ++cc) {

        cbg_fprintf(stdout, first_row_color,"%s", " ") ;

      }

      fprintf(stdout,"\n") ;

    }
    else if ((c > width * 1 -1 ) && (c <= width * 2 - 1)) {

      for (int cc = 0 ; cc < 80 ; ++cc) {

        cbg_fprintf(stdout, second_row_color,"%s", " ") ;

      }

      fprintf(stdout,"\n") ;

    }
    else if (c > width * 2 - 1) {

      for (int cc = 0 ; cc < 80 ; ++cc) {

        cbg_fprintf(stdout, third_row_color,"%s", " ") ;

      }

      fprintf(stdout,"\n") ;

    }



  }

  return ;

}


int main(void) {

  #if 1
  /** Print the French flag because it's a horizontal flag using @libaescprintf. **/
  print_flag_horizontal(bg_blue, bg_white, bg_red) ;
  #endif

  /** Print the German flag because it's a vertical flag using @libaescprintf **/
  //print_flag_vertical(bg_darkgray, bg_lightred, bg_lightyellow) ;

  return 0 ;

}



