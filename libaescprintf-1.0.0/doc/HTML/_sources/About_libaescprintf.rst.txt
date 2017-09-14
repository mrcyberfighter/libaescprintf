..  Copyright (c)  2017  Brüggemann Eddie.
    Permission is granted to copy, distribute and/or modify this document
    under the terms of the GNU Free Documentation License, Version 1.3
    or any later version published by the Free Software Foundation;
    with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
    A copy of the license is included in the section entitled "GNU
    Free Documentation License".

.. sectionauthor:: Brüggemann Eddie <mrcyberfighter@gmail.com>

==============================
About :program:`libaescprintf`
==============================

  At first I often try myself to find the generic function into termcap to get the colors and styles codes

  for building a library compliant with any terminal and I fail to find it...

  So I often try to get some help from a terminal dinosaur which master termcap or termios to

  make a more generic library.

  But nobody **HOME**...

.. note::

  I can do more with terminal Sequences as displaying a True Color image (RGB) into a terminal

  (xterm, terminals build with libvte-2.91 on GNU/Linux)

  But I must reduce the cursor to the minimum size

  for doing this but I can't restore a normal cursor size...

  :enjoy: So enjoy using :program:`libaescprintf` for ANSI art as I enjoy to write this little library.

-------------
Compatibility
-------------

  :program:`libaescprintf` was tested on as many terminals I could find into the repositories,

  sometimes some terminals either don't blink or don't accept **ANSI** escape sequences at all.

  But most of the time it works well.

  It works in most of the terminals: konsole as gnome-terminal and many others.

  But the old bug concern the background and the linefeed appears on some terminals:

  if you set the background color other than default and set an linefeed the entire line is

  background highlighted with the chosen color per example the Apple-Terminal do this one

  (but the blinking effect works well with it).

--------------------
Note from the author
--------------------

.. _libaescprintf-goal:

  I don't try to reinvent the wheel but simply provide this minimalist library

  in the following goals:

  1. At first to provide a lightweight library for only textual effect.

  2. To catch your attention so that someone can help me to make the library

    universal, using termcap (or termios).
   
