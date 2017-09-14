=================
**libaescprintf**
=================

:author: Eddie Brüggemann <mrcyberfighter@gmail.com>

:version: 1.0.0

:License: LGPL

------------
Introduction
------------

**libaescprintf** is a little library based on the ``ANSI escape sequences`` and so only compatible

with ``ANSI escape sequences`` *compliant terminals*.

Most of the terminals that I have tested works well but not all.

In addition to the **foreground** and **background** coloring,

**libaescprintf** provides some styles features like bold, strike-trough, italic, and so on...

-----------------------------
Outputting fancy textual text
-----------------------------

You can use **libaescprintf** for this task in 2 ways:

1. You make usage of the functions from **libaescprintf**.

    They are divided into **2 categories**:

    * Functions which **output** simply to the **standard output stream**: ``printf`` family.

    * Function which **output** to the wanted **stream**: fprintf family.

2. You can use the defines from **libaescprintf** formatting the output using any ``libc`` function.

:note: The goal of this library is to provide a *lightweight textual pretty output*.

-------
Credits
-------

Thanks to my mother, my family and to the doctors.

Stay away from drugs: drugs destroy your brain and your life.

----
NOTE
----

In fact this library is a manner for asking to help for building

a universal lightweight pretty print library using

termcap for getting universal escape sequences.

Because I have try to find it alone without success.

Thanks for any help.

-------
LICENSE
-------

::

  libaescprintf a pretty print library using ANSI escape sequences.
  Copyright (C) 2017  Brüggemann Eddie.

  This library is free software: you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as published
  by the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
