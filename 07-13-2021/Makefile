all: recursion1 recursion2 recursion3

recursion1: recursion1.o
	g++ -o $@ $<

recursion2: recursion2.o
	g++ -o $@ $<

recursion3: recursion3.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f recursion? *.o
