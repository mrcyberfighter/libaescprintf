..  Copyright (c)  2017  Brüggemann Eddie.
    Permission is granted to copy, distribute and/or modify this document
    under the terms of the GNU Free Documentation License, Version 1.3
    or any later version published by the Free Software Foundation;
    with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
    A copy of the license is included in the section entitled "GNU
    Free Documentation License".

.. sectionauthor:: Brüggemann Eddie <mrcyberfighter@gmail.com>

.. _libaescprintf-functions:

============================================
The styled colored :func:`printf` functions:
============================================

--------------------
Styled Print Format:
--------------------

.. c:function:: int s_printf(style_t style, const char *fmt, ...)

  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

------------------------------
Color Foreground Print Format:
------------------------------

.. c:function:: int cfg_printf(fg_color_t color, const char *fmt, ...)

  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

------------------------------
Color Background Print Format:
------------------------------

.. c:function:: int cbg_printf(bg_color_t bgcolor, const char *fmt, ...)

  :param bg_color: The :ref:`foreground color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

-------------------------------------
Styled Foreground Color Print Format:
-------------------------------------

.. c:function:: int scfg_printf(style_t style, fg_color_t fg_color, const char *fmt, ...)

  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

-------------------------------------
Styled Background Color Print Format:
-------------------------------------

.. c:function:: int scbg_printf(style_t style, bg_color_t bg_color, const char *fmt, ...)

  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param bg_color: The :ref:`background color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.


-----------------------------------------
Color Foreground Background Print Format:
-----------------------------------------

.. c:function:: int cfgbg_printf(fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...)

  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param bg_color: The :ref:`foreground color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.


------------------------------------------------
Styled Color Foreground Background Print Format:
------------------------------------------------

.. c:function:: int scfgbg_printf(style_t style, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...)

  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param bg_color: The :ref:`foreground color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.


============================================
The styled colored :func:`fprintf` functions
============================================

-------------------------
File Styled Print Format:
-------------------------

.. c:function:: int s_fprintf(FILE *fp, style_t style, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

-----------------------------------
File Color Foreground Print Format:
-----------------------------------

.. c:function:: int cfg_fprintf(FILE *fp, fg_color_t color, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

-----------------------------------
File Color Background Print Format:
-----------------------------------

.. c:function:: int cbg_fprintf(FILE *fp, bg_color_t bgcolor, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param bg_color: The :ref:`foreground color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

------------------------------------------
File Styled Foreground Color Print Format:
------------------------------------------

.. c:function:: int scfg_fprintf(FILE *fp, style_t style, fg_color_t fg_color, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

-------------------------------------
Styled Background Color Print Format:
-------------------------------------

.. c:function:: int scbg_printf(FILE *fp, style_t style, bg_color_t bg_color, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param bg_color: The :ref:`background color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.

----------------------------------------------
File Color Foreground Background Print Format:
----------------------------------------------

.. c:function:: int cfgbg_fprintf(FILE *fp, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param bg_color: The :ref:`foreground color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.


-----------------------------------------------------
File Styled Color Foreground Background Print Format:
-----------------------------------------------------

.. c:function:: int scfgbg_fprintf(FILE *fp, style_t style, fg_color_t fg_color, bg_color_t bg_color, const char *fmt, ...)

  :param fp: A :c:type:`FILE` pointer.
  :param style: the :ref:`style <libaescprintf-styles>` to apply to the text.
  :param fg_color: The :ref:`foreground color <libaescprintf-fg-color>` to apply.
  :param bg_color: The :ref:`foreground color <libaescprintf-bg-color>` to apply.
  :param fmt: The format string for the output.
  :return: The number of characters from the output string or -1 in case of error.
  :rtype: :c:type:`int`.


