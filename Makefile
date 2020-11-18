targets = task01.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: task01.bin

task01.bin: src/main.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run1: clean prep compile
	./dist/task01.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO

