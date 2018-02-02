CXX=g++
CFLAGS=--std=c++14 -Wall -Wextra -Wpedantic -Iincludes

students: *.cpp #includes/*.hpp
	$(CXX) students.cpp -o $@ $(CFLAGS)

clean:
	rm students
