all: overloading1 bitwise1 swap1 namespace1

overloading1: overloading1.o
	g++ -o $@ $<

bitwise1: bitwise1.o
	g++ -o $@ $<

swap1: swap1.o
	g++ -o $@ $<

namespace1: namespace1.o percent.o
	g++ -o $@ $^

clean:
	rm -f overloading? bitwise? swap? namespace? *.o
