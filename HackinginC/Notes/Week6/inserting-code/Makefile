CC=gcc
CFLAGS = -std=c99 -fno-omit-frame-pointer -g -zexecstack -fno-stack-protector

PERCENT=%

SOURCES := $(wildcard *.c)
EXECUTABLES := $(patsubst %.c, %, $(SOURCES))

all: $(EXECUTABLES)

%: %.c
	$(CC) $(CFLAGS) -Wall -Wextra $^ -o $@

.PHONY: all clean

clean:
	- ${RM} $(EXECUTABLES)

