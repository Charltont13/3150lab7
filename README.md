Overview
This C++ program computes and outputs the cosine distances between pairs of vectors from a given file, sorted by closeness.

Files
main.cpp: Main program file.
double_vector.cpp: Implements vector operations.
double_read_vector.cpp: Handles reading vectors from file.
my_distance.cpp: Defines the structure for storing distances.
Compile & Run
To Compile
sh

g++ -std=c++11 -o vector_distance double_read_vector.cpp double_vector.cpp my_distance.cpp main.cpp
To Run
sh

./vector_distance
Unit Tests
Compile and run tests:

sh
g++ -std=c++11 -o unit_tests double_vector.cpp unit_test.cpp && ./unit_tests
