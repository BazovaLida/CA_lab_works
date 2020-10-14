all: main

main: main.o factorial.a 
	g++ main.o factorial.a -o start  

main.o: main.cpp
	g++ -c main.cpp

calculator.a : factorial.o
	ar rvs factorial.a factorial.o

calculator.o: factorial.cpp
	g++ -c factorial.cpp

clean:
	rm -rf *.o factorial.a start
