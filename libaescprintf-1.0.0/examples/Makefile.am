EXAMPLES = ./example_flags.c    \
           ./examples_matrix.c  \
           ./example_text.c

install-data-hook:
	if `test ! -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples"` ; then ${MKDIR_P} -m 777 "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples" ; fi
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples"` ; then ${INSTALL} --target-directory="$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples" -m 0755 $(EXAMPLES) ; fi 
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples"` ; then ${INSTALL} --target-directory="$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples" -m 0777 $(EXAMPLES) ; fi 

uninstall-hook:
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples"` ; then $(RM) -fr "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}/examples" ; fi
	if `test -d "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}"` ; then $(RM) -fr "$(DESTDIR)${datarootdir}/${PACKAGE_TARNAME}" ; fi

EXTRA_DIST = $(EXAMPLES)
