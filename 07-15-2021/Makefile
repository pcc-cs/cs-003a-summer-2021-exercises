all: ref1 poly1 poly2

ref1: ref1.o
	g++ -o $@ $<

poly1: poly1.o
	g++ -o $@ $<

poly2: poly2.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f ref? poly? *.o
