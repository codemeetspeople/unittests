#! /bin/bash

g++ -c -std=c++11 ../point/Point.cpp
g++ -c -std=c++11 point_test.cpp
g++ main.cpp -std=c++11 *.o -o test.out
