CC := gcc

CFLAGS := -Wall -Wextra

CSRC := $(wildcard ./*.c)

CWD := $(shell basename $(CURDIR))

INSTALLDIR := $(shell readlink -f ../../bin)

.PHONY: clean all install

all: a.out

a.out: $(CSRC)
	$(CC) $(CFLAGS) -o $@ $^

install:
	install -D a.out $(INSTALLDIR)/$(CWD)

clean:
	rm -f *.o *.out
