all: test.out

test.out: main.o point_test.o point_test2.o Point.o
	g++ -std=c++11 -o test.out main.o point_test.o point_test2.o Point.o

main.o:
	g++ -std=c++11 -c main.cpp

point_test.o:
	g++ -std=c++11 -c point_test.cpp

point_test2.o:
	g++ -std=c++11 -c point_test2.cpp

Point.o:
	g++ -std=c++11 -c ../point/Point.cpp

clean:
	rm -f *.o