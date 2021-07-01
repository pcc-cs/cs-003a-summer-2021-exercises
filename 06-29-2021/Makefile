all: overloading1 arrays1 arrays2 destructors1

overloading1: overloading1.o
	g++ -o $@ $<

arrays1: arrays1.o
	g++ -o $@ $<

arrays2: arrays2.o
	g++ -o $@ $<

destructors1: destructors1.o
	g++ -o $@ $<

.cpp.o:
	g++ -o $@ -c $<

clean:
	rm -f overloading? arrays? destructors? *.o
