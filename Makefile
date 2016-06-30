CC=gcc
CXX=g++
CFLAGS=-Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer
CXXFLAGS = -O2
AS		= as
LD		= ld
CPP		= $(CXX) -E
tree = main.cpp login.cpp

orangewater := orangewater.o framework.o 
   $(CXX)  orangewater.cpp framework.cpp -o orangewater
   