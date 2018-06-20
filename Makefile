PNAME   = cb
PVER    = 0.20180620
PROG1   = cbc
PROG2   = cbf
PROG3   = cbp
PROGS   = $(PROG1) $(PROG2) $(PROG3)
PDOCS   = AUTHORS CHANGELOG LICENSE README.md
CC      = gcc
PREFIX  = /usr/local
RM      = @rm -fv
INSTALL = install

.PHONY: all clean install

all: $(PROGS)

$(PROG1):
	$(CC) src/$@.c -o $@

$(PROG2):
	$(CC) src/$@.c -o $@

$(PROG3):
	$(CC) src/$@.c -o $@

clean:
	$(RM) $(PROGS)

install: $(PROGS)
	$(INSTALL) -d $(PREFIX)
	$(INSTALL) -m 0755 $(PROGS) $(PREFIX)/bin/
	$(INSTALL) -d $(PREFIX)/share/doc/$(PNAME)
	$(INSTALL) -m 0644 $(PDOCS) $(PREFIX)/share/doc/$(PNAME)
