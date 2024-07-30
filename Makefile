CC=gcc
CFLAG=-Wno-implicit-function-declaration -Wextra -Wall -Wfloat-equal -Wundef -Wshadow -Wpointer-arith -Wcast-align -Wstrict-prototypes -Wstrict-overflow=5 -Wwrite-strings -Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum -Wconversion -Wunreachable-code -Wformat=2 -O3
FLAG=$(CFLAG)

#https://stackoverflow.com/questions/714100/os-detecting-makefile
CONFIG=config.h
ifeq ($(OS),Windows_NT)
	EXT=exe
else
	EXT=out
endif

all: p107 p127
	@echo "Done"

p107: p107.c
	@echo "$@"
	$(CC) $(FLAG) -o "$@.$(EXT)" $< $(CONFIG)

p127: p127.c
	@echo "$@"
	$(CC) $(FLAG) -o "$@.$(EXT)" $< $(CONFIG)

clean:
	@rm *.$(EXT)
	@echo "Done"
