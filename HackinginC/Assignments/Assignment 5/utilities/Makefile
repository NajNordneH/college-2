PREFIX=/usr/local

BINARIES = reverseaddr shellcode

CFLAGS = -std=c11 -Wall -Wextra -Wformat=2 -Wpedantic -Werror -pedantic -fstrict-aliasing \
		 -Wpointer-arith -Wcast-align -pipe -O2

.PHONY: all
all: $(BINARIES)


reverseaddr: reverseaddr.c functions.o

functions.o: functions.c functions.h

install: $(BINARIES)
	install -m755 --strip $(BINARIES) $(PREFIX)/bin

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: dist-clean
dist-clean: clean
	$(RM) $(BINARIES)
