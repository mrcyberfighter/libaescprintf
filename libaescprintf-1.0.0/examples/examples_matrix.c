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

#include <time.h>

void matrix(void) {

  /** Print a matrix in a terminal using @libaescprintf **/

  fg_color_t fg_colors[] = { fg_blue, fg_cyan, fg_darkgray, fg_green, fg_green, fg_lightblue, fg_lightcyan, fg_lightgray, fg_lightgreen, fg_lightpink, fg_lightred, fg_lightred, fg_lightyellow } ;

  unsigned int counter = 0 ;

  srand(time(NULL)) ;

  while (counter < 4294967295-1)  {

    char *c = (char *) malloc(sizeof(char)) ;

    *c = 48 ;

    *c += rand() % 10 ;

    cfg_printf(fg_colors[rand() % sizeof(fg_colors)/sizeof(int)], "%c", *c) ;



    fflush(stdout) ;

    free(c) ;

 
    ++counter ;
 

  }

}


int main(void) {

  matrix() ;

  return 0 ;

}

