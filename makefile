CPP := g++
CPPFLAGS := -g -O0
EXE := example1 example2
all : example1 example2
example1 : example1.cpp
example2 : example2.cpp
clean    :
	Rm -f *~ example1 example2 *.dSYM/
