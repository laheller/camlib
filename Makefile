-include config.mak

CC=gcc
CD?=cd
PYTHON3?=python3

FILES=$(addprefix src/,operations.o packet.o enum.o data.o enum_dump.o util.o canon.o generic.o)

# Basic support for MinGW
ifdef WIN
FILES+=src/winapi.o
CC=x86_64-w64-mingw32-gcc
LDFLAGS=-lhid -lole32 -luser32 -lgdi32 -luuid
else
LDFLAGS=-lusb
FILES+=src/libusb.o src/backend.o
endif

CFLAGS=-Isrc/ -I../mjs/

%.o: %.c src/*.h
	$(CC) -c $(CFLAGS) $< -o $@

# Defining NOPYTHON will default to regular compiling
ifndef NOPYTHON
src/enum_dump.o: src/ptp.h src/stringify.py
	$(CD) src && $(PYTHON3) stringify.py
	$(CC) -c src/enum_dump.c $(CFLAGS) -o src/enum_dump.o
endif

# Some basic tests
TEST_TARGETS=live script pktest optest test2 evtest wintest.exe
script: ../mjs/mjs.o test/script.o
script: FILES+=../mjs/mjs.o test/script.o
pktest: test/pktest.o
pktest: FILES+=test/pktest.o
optest: test/optest.o
optest: FILES+=test/optest.o
test2: test/test2.o
test2: FILES+=test/test2.o
evtest: test/evtest.o
evtest: FILES+=test/evtest.o
live: test/live.o
live: FILES+=test/live.o
live: CFLAGS+=-lX11
wintest.exe: FILES+=test/wintest.o
wintest.exe: test/wintest.o

$(TEST_TARGETS): $(FILES)
	$(CC) $(FILES) $(LDFLAGS) $(CFLAGS) -o $@

# Compile javascript CLI
script_test: script
	./script test/connect.js

clean:
	$(RM) *.o src/*.o *.out $(TEST_TARGETS) test/*.o *.exe
