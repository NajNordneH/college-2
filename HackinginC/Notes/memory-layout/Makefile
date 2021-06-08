SOURCES := $(wildcard *.c)
EXECUTABLES := $(patsubst %.c, %, $(SOURCES))

all: $(EXECUTABLES)

%: %.c
	$(CC) -Wall -Wextra $^ -o $@

.PHONY: all clean

clean:
	- ${RM} $(EXECUTABLES)
