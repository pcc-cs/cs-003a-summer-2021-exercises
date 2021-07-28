all: const1

const1: const1.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f const? *.o