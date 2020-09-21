CXX=$(CROSS_COMPILE)g++

CFLAGS+=-Wall -fPIC -D_GNU_SOURCE -std=c++17
LDFLAGS+=-lcheck

.PHONY: all

all : test

test: test.o
	$(CXX) $(CFLAGS) $(LDFLAGS) -o $@ $^

test.o: test.cpp
	$(CXX) $(CFLAGS) -c $^
