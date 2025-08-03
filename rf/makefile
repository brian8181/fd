# File Name:  imakefile
# Build Date: Fri, Aug  1, 2025  4:46:17 AM
# Version:    0.0.1


top_build_prefix = ../
top_builddir = ..
top_srcdir = ..

CC = gcc
CFLAGS = -g -O2
CPPFLAGS = -I. -I$(top_srcdir)/include
CSCOPE = cscope
CTAGS = ctags
CXX = g++
CXXDEPMODE = depmode=gcc3
CXXFLAGS = $(CXXWFLAGS) $(CXXOFLAGS) $(CXXIFLAGS) $(CXXMFLAGS)
CYGPATH_W = cygpath -w

REFLEX = reflex
REFLAGS =
#LIBREFLEX = $(top_builddir)/lib/libreflex.a
BISON = bison
INCBOOST = /opt/local/include
LIBBOOST = /opt/local/lib/libboost_regex-mt.dylib
CXXOFLAGS = -O2
CXXWFLAGS = -Wall -Wunused -Wextra
CXXIFLAGS = -I. -I../include -I $(INCBOOST)
CXXMFLAGS =
YACC = bison -y
YFLAGS =
LIBS=-L/usr/lib -L/usr/lib64 -L/usr/local/lib -L/usr/local/lib64


all: reflexexample3 reflexexample3xx

reflexexample3: reflexexample3.l reflexexample3.y
			$(YACC) -d reflexexample3.y
			$(REFLEX) $(REFLAGS) --flex --bison --header-file reflexexample3.l
			$(CC) $(CXXFLAGS) -c y.tab.c
			$(CXX) $(CXXFLAGS) -o $@ y.tab.o lex.yy.cpp $(LIBS) -lreflex
			./reflexexample3 < reflexexample3.test

reflexexample3xx:	reflexexample3.lxx reflexexample3.yxx
			$(BISON) -d reflexexample3.yxx
			$(REFLEX) $(REFLAGS) --flex --bison --header-file reflexexample3.lxx
			$(CXX) $(CXXFLAGS) -o $@ reflexexample3.tab.cxx lex.yy.cpp $(LIBS) -lreflex
			./flexexample3xx < reflexexample3.test
