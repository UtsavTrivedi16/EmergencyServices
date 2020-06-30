CXX = g++
CXXFLAGS = -Wall -g

all: ems_test

ems_test: test.cpp src/*.cpp src/*.hpp
	$(CXX) $(CXXFLAGS) -o ems_test $^

test: ems_test
	./ems_test

clean:
	rm -f ems_test
