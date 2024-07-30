FLAG=-Wno-implicit-function-declaration -Wextra -Wall -Wfloat-equal -Wundef -Wshadow -Wpointer-arith -Wcast-align -Wstrict-prototypes -Wstrict-overflow=5 -Wwrite-strings -Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum -Wconversion -Wunreachable-code -Wformat=2 -O2
CC=gcc
SRCDIR=src
BINDIR=bin

#https://stackoverflow.com/questions/714100/os-detecting-makefile
CONFIG=config.h
ifeq ($(OS),Windows_NT)
	EXT=exe
else
	EXT=out
endif

all: p107 p127
	@echo "Done"

%: $(SRCDIR)/%.c
	@echo "$@"
	$(CC) $(FLAG) -o $(BINDIR)/$@.$(EXT) $< $(CONFIG)

%.o: $(SRCDIR)/%.c
	@echo "$@"
	$(CC) $(FLAG) -c $(BINDIR)/$@ $< $(CONFIG)

clean:
	@rm -f $(BINDIR)/*.$(EXT)
	@rm -f $(BINDIR)/*.o
	@rm -f $(BINDIR)/*.gch
	@echo "Done"
