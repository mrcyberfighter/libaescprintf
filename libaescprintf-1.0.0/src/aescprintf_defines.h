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

#ifndef LIBAESCPRINTF_1_0_0_DEFINES_HH /** Inclusion guard **/
#define LIBAESCPRINTF_1_0_0_DEFINES_HH

/** About definition: **/
#define AUTHOR      "Brüggemann Eddie"
#define MAIL        "<mrcyberfighter@gmail.com>"
#define LIBNAME     "libaescprintf"
#define VERSION     "1.0.0"
#define LICENSE     "lgpl"
#define PRGWEBURL   ""
#define COPYRIGHT   "Copyright (C) 2017 Brüggemann Eddie"

/** libaescprintf: Ansi Escape Sequences Color printf
  *
  * A mini color printing library based on ANSI escape sequence (instead of termcap.h)
  *
  * It should work on most terminals, it work fully on xterm.
  *
  */


// Building a color and a style type. (Used into library functions).

enum style_enum { normal = 0 , bold = 1 , dim = 2 , italic = 3, underline = 4 , blink = 5, inverted = 7, hidden = 8, strikethrough = 9 } ;

//typedef enum color_enum  color_t ;
typedef enum style_enum  style_t ;

// Building a foreground color type. (Used into library functions).

                     // Foreground Normal >= 30   <= 37   (8 colors)
                     // Foreground Light  >= 90   <= 97   (8 colors)
enum fg_color_enum { fg_black     = 30,     fg_darkgray     = 90,
                     fg_red       = 31,     fg_lightred     = 91,
                     fg_green     = 32,     fg_lightgreen   = 92,
                     fg_yellow    = 33,     fg_lightyellow  = 93,
                     fg_blue      = 34,     fg_lightblue    = 94,
                     fg_pink      = 35,     fg_lightpink    = 95,
                     fg_cyan      = 36,     fg_lightcyan    = 96,
                     fg_lightgray = 37,     fg_white        = 97,
          
                     fg_default   = 39 } ;

                  
// Building a background color type. (Used into library functions).                  
                  
                     // Background Normal >= 40   <= 47   (8 colors)
                     // Background Light  >= 100  <= 107  (8 colors)
enum bg_color_enum { bg_black     = (30+10),     bg_darkgray    = (90+10),
                     bg_red       = (31+10),     bg_lightred    = (91+10),
                     bg_green     = (32+10),     bg_lightgreen  = (92+10),
                     bg_yellow    = (33+10),     bg_lightyellow = (93+10),
                     bg_blue      = (34+10),     bg_lightblue   = (94+10),
                     bg_pink      = (35+10),     bg_lightpink   = (95+10),
                     bg_cyan      = (36+10),     bg_lightcyan   = (96+10),
                     bg_lightgray = (37+10),     bg_white       = (97+10),
          
                     bg_default   = (39+10) } ;

typedef enum fg_color_enum  fg_color_t ;
typedef enum bg_color_enum  bg_color_t ;


/** You can use this defines into raw string formatting. **/

#define ESC   "\033"  // Escape sequence.

// Dark colors defines.
#define DB    ESC "[30m"  // Dark Black.
#define DR    ESC "[31m"  // Dark Red.
#define DG    ESC "[32m"  // Dark Green.
#define DY    ESC "[33m"  // Dark Yellow.
#define DS    ESC "[34m"  // Dark Sky. (Dark blue)
#define DP    ESC "[35m"  // Dark Pink.
#define DC    ESC "[36m"  // Dark Cyan.
#define DW    ESC "[37m"  // Dark white. (Light Gray)

// Light colors defines.
#define LB    ESC "[90m"  // Light Black.
#define LR    ESC "[91m"  // Light Red.
#define LG    ESC "[92m"  // Light Green.
#define LY    ESC "[93m"  // Light Yellow.
#define LS    ESC "[94m"  // Light Sky.  (Light blue)
#define LP    ESC "[95m"  // Light Pink.
#define LC    ESC "[96m"  // Light Cyan.
#define LW    ESC "[97m"  // Light White.

#define DD    ESC "[39m"  // Default color.

// Styles defines
#define RESET           ESC "[0m"   // Reset.
#define BOLD            ESC "[1m"   // Bold.
#define DIM             ESC "[2m"   // DIM
#define ITALIC          ESC "[3m"   // Italic.
#define UNDERSTRIKE     ESC "[4m"   // Under-strike.
#define BLINK           ESC "[5m"   // Blink (Doesn't work on all terminals look at xterm it work's on it !).
#define INVERTED        ESC "[7m"   // Inverted (Invert foreground and background).
#define HIDDEN          ESC "[8m"   // Hidden (Print only background color).
#define STRIKETROUGHT   ESC "[9m"   // Strike-through.


#ifndef NO_REDIRECT
#define arg_err_msg(fp) if (fp != stdout && fp != stderr) { fprintf(stderr,"%s(...) argument fp must be: 'stdout' or 'stderr'\n", __func__) ; fflush(stderr) ; return -1 ; }
#endif


#endif /** Inclusion guard **/
