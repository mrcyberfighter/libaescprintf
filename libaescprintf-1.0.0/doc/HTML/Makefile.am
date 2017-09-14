DOC_HTML = ./About_libaescprintf.html \
           ./Functions.html \
           ./genindex.html \
           ./index.html \
           ./libaescprintf_example_screenshot.html \
           ./libaescprintf.html \
           ./objects.inv \
           ./search.html \
           ./searchindex.js \
           ./Types_and_defines.html
                 
DOC_IMG = ./_images/libaescprintf_horizontal_flag_example_screenshot.png \
          ./_images/libaescprintf_text_example_screenshot.png \
          ./_images/libaescprintf_matrix_example_screenshot.png \
          ./_images/libaescprintf_vertical_flag_example_screenshot.png
                                 
DOC_SRC = ./_sources/libaescprintf_example_screenshot.rst.txt \
          ./_sources/About_libaescprintf.rst.txt \
          ./_sources/Types_and_defines.rst.txt \
          ./_sources/index.rst.txt \
          ./_sources/Functions.rst.txt \
          ./_sources/libaescprintf.rst.txt

DOC_STATIC =    ./_static/searchtools.js \
                ./_static/basic.css \
                ./_static/file.png \
                ./_static/down.png \
                ./_static/doctools.js \
                ./_static/up.png \
                ./_static/down-pressed.png \
                ./_static/ajax-loader.gif \
                ./_static/nature.css \
                ./_static/up-pressed.png \
                ./_static/comment-bright.png \
                ./_static/comment.png \
                ./_static/pygments.css \
                ./_static/jquery.js \
                ./_static/underscore.js \
                ./_static/comment-close.png \
                ./_static/websupport.js \
                ./_static/minus.png \
                ./_static/plus.png

html_dirpath = $(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML
                        
image_dirpath = $(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images

src_dirpath = $(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources

static_dirpath = $(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_static

                        
install-data-hook:
	if `test ! -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML"` ; then ${MKDIR_P} "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML" ; fi
	if `test ! -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images"` ; then ${MKDIR_P} "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images" ; fi                           
	if `test ! -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources"` ; then ${MKDIR_P} "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources" ; fi
	if `test ! -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_static)"` ; then ${MKDIR_P} "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_static" ; fi                                                         
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images"` ; then ${INSTALL} --target-directory="$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images" -m 0755 $(DOC_IMG) ; fi                           
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources"` ; then ${INSTALL} --target-directory="$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources" -m 0755 $(DOC_SRC) ; fi                           
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_static"` ; then ${INSTALL} --target-directory="$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_static" -m 0755 $(DOC_STATIC) ; fi                           
	if `test -d "$(DESTDIR)$(html_dirpath)"` ; then ${INSTALL} --target-directory="$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML" -m 0755 $(DOC_HTML) ; fi                           

uninstall-hook:
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML"` ; then $(RM) -fr "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML" ; fi
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images"` ; then $(RM) -fr "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_images" ; fi
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources"` ; then $(RM) -fr "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_sources" ; fi
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/HTML/_static)"` ; then $(RM) -fr "$(static_dirpath)" ; fi
	if `test -d "$(DESTDIR)${docdir}"` ; then $(RM) -fR "$(DESTDIR)${docdir}" ; fi

EXTRA_DIST = $(DOC_HTML) $(DOC_IMG) $(DOC_SRC) $(DOC_STATIC)


