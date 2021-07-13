all: recursion1 recursion2

recursion1: recursion1.o
	g++ -o $@ $<

recursion2: recursion2.o
	g++ -o $@ $<

# -g flag is necessary for debugging (stores extra symbol info).
.cpp.o:
	g++ -c -g -o $@ $<

clean:
	rm -f recursion? *.o
