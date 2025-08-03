# File Name:  if_else_parser/makefile
# Build Date: Wed Apr 23 22:44:01 CDT 2025
# Version:    0.1.1

APP=lines
CXX=g++
CC=gcc
BISON=bison
LEX=flex
BISONFLAGS= -y -d --html --graph
CXXFLAGS=-Wall -std=c++17 -fPIC
CCFLAGS=
SRC=src
BLD?=build
OBJ?=build

# lib settings
LIBS=-L/usr/lib -L/usr/lib64 -L/usr/local/lib -L/usr/local/lib64
INCLUDES=-I/usr/local/include/cppunit/
LDFLAGS=$(INCLUDES) $(LIBS)

ifdef DEBUG
	CXXFLAGS += -DDEBUG
endif

ifdef CYGWIN
	CXXFLAGS +=-DCYGWIN
	LDFLAGS += -lfmt -lcppunit.dll
else
	LDFLAGS += -lfmt -lcppunit
endif

all: $(BLD)/fd # $(BLD)/parser

rebuild: clean all

# C with Flex
$(BLD)/fd: $(BLD)/lexer.yy.c $(BLD)/parser.tab.c
	 $(CC) $(CCFLAGS) $(BLD)/parser.tab.c $(BLD)/lexer.yy.c -o $(BLD)/fd

# CPP with Re-Flex
$(BLD)/parser: $(BLD)/reflexer.yy.cpp $(BLD)/parser.tab.cpp
	 $(CXX) $(CXXFLAGS) $(BLD)/parser.tab.cpp $(BLD)/reflexer.yy.cpp -o $(BLD)/parser

# C with Flex
$(BLD)/lexer.yy.c: $(SRC)/lexer.l
	$(LEX) -o $(BLD)/lexer.yy.c $(SRC)/lexer.l

# CPP with Re-Flex
$(BLD)/reflexer.yy.cpp: $(SRC)/reflexer.ll
	reflex --flex -o $(BLD)/reflexer.yy.cpp $(SRC)/reflexer.ll

# C with Bison
$(BLD)/parser.tab.c: $(SRC)/parser.y
	$(BISON) $(BISONFLAGS) $(SRC)/parser.y -o $(BLD)/parser.tab.c

# CPP with Bison
$(BLD)/parser.tab.cpp: $(SRC)/parser.yy
	$(BISON) $(BISONFLAGS) -LC++ $(SRC)/parser.yy -o $(BLD)/parser.tab.cpp

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CCFLAGS) -c -o $@ $<

.PHONY: clean
clean:
	-rm -f $(BLD)/*
	-rm -f $(OBJ)/*

.PHONY: help
help:
	@echo  '  all                        - build all'
	@echo  '  clean                      - remove all files from build dir'
