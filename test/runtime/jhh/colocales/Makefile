# This Makefile is useful for development and testing of the test stub.

all: colocales

COMPILE = $(shell $(CHPL_HOME)/util/config/compileline --compile)
LIBS = $(shell $(CHPL_HOME)/util/config/compileline --libraries)

colocales: lib/libcolocales.a colocales.c
	$(COMPILE) -g colocales.c -Llib -l$@ $(LIBS) -o $@

lib/libcolocales.a: colocales.chpl
	chpl colocales.chpl --library

clean::
	rm -rf colocales lib colocales.dSYM
