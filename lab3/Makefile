all: main.o print_key.a
	g++ main.o print_key.a -o phrasal_verb_get

main.o: main.cpp
	g++ -c main.cpp

print_key.a : print_key.o
	ar rvs print_key.a print_key.o

print_key.o: print_key.cpp
	g++ -c print_key.cpp

clean:
	rm -rf *.o print_key.a phrasal_verb_get