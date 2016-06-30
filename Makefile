CC=gcc
CXX=g++
CFLAGS=-Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer
CXXFLAGS = -O2
AS		= as
LD		= ld
CPP		= $(CXX) -E
tree = main.cpp login.cpp

orangewater := main.o login.o 
   $(CXX)  main.cpp -o main
   $(CXX)  login.cpp -o login