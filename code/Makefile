CXX	=g++
CXXFLAGS=-g -Og -w -std=c++11 -fpermissive
LDFLAGS	=$(CXXFLAGS)

SRCS	=$(wildcard *.cpp)
OBJS	=$(SRCS:.cpp=.o)

meos:	$(OBJS)
	$(CXX) $(LDFLAGS) -o $@ @+

.PHONY: clean
clean:
	rm -f *.o
