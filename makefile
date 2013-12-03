CXX      := g++
CXXFLAGS := -g -O0
EXE      := example1 example2
all      : example1 example2
example1 : example1.cpp
example2 : example2.cpp
clean    :
	rm -fr *~ $(EXE) *.dSYM/
