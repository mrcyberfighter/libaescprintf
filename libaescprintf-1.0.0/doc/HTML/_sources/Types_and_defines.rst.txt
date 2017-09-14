..  Copyright (c)  2017  Brüggemann Eddie.
    Permission is granted to copy, distribute and/or modify this document
    under the terms of the GNU Free Documentation License, Version 1.3
    or any later version published by the Free Software Foundation;
    with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
    A copy of the license is included in the section entitled "GNU
    Free Documentation License".

.. sectionauthor:: Brüggemann Eddie <mrcyberfighter@gmail.com>

======================
Types of libaescprintf
======================

  :program:`libaescprintf` make usage of different types of colors and styles:


.. _libaescprintf-color:

  .. code-block:: C

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


  :ref:`Which you can use in various functions from this library. <libaescprintf-functions>`

.. _libaescprintf-styles:

------
Styles
------

  + normal

  + bold

  + dim

  + italic

  + underline

  + blink

  + inverted

  + hidden

  + strikethrough


------
Colors
------

.. _libaescprintf-fg-color:

^^^^^^^^^^^^^^^^^^^^^^^^
Foreground colors values
^^^^^^^^^^^^^^^^^^^^^^^^

  + fg_black

  + fg_darkgray
                    
  + fg_red

  + fg_lightred
                   
  + fg_green

  + fg_lightgreen
                   
  + fg_yellow

  + fg_lightyellow
                    
  + fg_blue

  + fg_lightblue
                   
  + fg_pink

  + fg_lightpink
                   
  + fg_cyan

  + fg_lightcyan
                   
  + fg_lightgray

  + fg_white
           
  + fg_default (Your current terminal foreground color).

.. _libaescprintf-bg-color:

^^^^^^^^^^^^^^^^^^^^^^^^
Background colors values
^^^^^^^^^^^^^^^^^^^^^^^^

  + bg_black

  + bg_darkgray
                   
  + bg_red

  + bg_lightred
                   
  + bg_green

  + bg_lightgreen
                   
  + bg_yellow

  + bg_lightyellow
                   
  + bg_blue

  + bg_lightblue
                   
  + bg_pink

  + bg_lightpink
                   
  + bg_cyan

  + bg_lightcyan
                   
  + bg_lightgray

  + bg_white
           
  + bg_default (Your current terminal background color).



========================
Defines of libaescprintf
========================

.. _ansi_escape_sequences:

  The ANSI escape sequences are defines as well into :program:`libaescprintf`:

  .. code-block:: C

    /** You can use this defines into raw string formatting. **/

    #define ESC   "\033"  // Escape sequence (octal format).

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
   
      
  You can simply make usage of them into :func:`printf` family functions.


