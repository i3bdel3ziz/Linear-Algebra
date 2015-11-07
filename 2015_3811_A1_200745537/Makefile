all: Matrix.o Point.o Vector.o
	g++ Matrix.o Point.o Vector.o main.cpp -o main

clean:
	rm -f *.o main


Matrix.o: Matrix.h Matrix.cpp
	g++ -c Matrix.cpp

Vector.o: Vector.h Vector.cpp
	g++ -c Vector.cpp

Point.o: Point.h Point.cpp
	g++ -c Point.cpp
