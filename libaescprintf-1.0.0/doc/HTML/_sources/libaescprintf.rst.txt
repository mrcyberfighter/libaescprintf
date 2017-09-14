..  Copyright (c)  2017  Brüggemann Eddie.
    Permission is granted to copy, distribute and/or modify this document
    under the terms of the GNU Free Documentation License, Version 1.3
    or any later version published by the Free Software Foundation;
    with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
    A copy of the license is included in the section entitled "GNU
    Free Documentation License".

.. sectionauthor:: Brüggemann Eddie <mrcyberfighter@gmail.com>

========================================================
libaescprintf (ANSI Escape Sequence Color Print Format).
========================================================

:library: libaescprintf

:version: |version|

:author: Brüggemann Eddie

:contact: <mrcyberfighter@gmail.com>

:license: LGPLv3

:website: <http://www.open-source-projects.net/libaescprintf/libaescprintf>

:release: |today|

.. sectionauthor:: Brüggemann Eddie <mrcyberfighter@gmail.com>

------------
Introduction
------------

  :program:`libaescprintf` is a little library based on the ``ANSI escape sequences`` and only compatible

  with terminals :ref:`ANSI escape sequences <ansi_escape_sequences>` compliant terminals.

  Most of terminal that I have tested works well but not all.

  But in addition :program:`libaescprintf` provides

  some styles features like **bold**, **strike-trough**, **italic**, and so on...

|

  .. note:: You can insert the :ref:`ANSI escapes sequences <ansi_escape_sequences>`

    into an :command:`echo` command or using the binary :program:`tput`

    but with this library you can use it into a source code.

  :note: :ref:`The goal <libaescprintf-goal>` of this library is to provide a lightweight textual pretty output.

-------------
libaescprintf
-------------

  + :program:`libaescprintf` can be divided into 2 different output functions types.

    + :func:`printf(...)`

      For simply formatting the output.

    and

    + :func:`fprintf(...)`
  
      For using the :c:type:`FILE *` **stream** you want.
  
      And why not serializing to a file...

  + :program:`libaescprintf` can be divided into :ref:`background and foreground <libaescprintf-color>` colors.

    The colors can be divided into Light and Dark colors.

  + :program:`libaescprintf` provides styles features.

