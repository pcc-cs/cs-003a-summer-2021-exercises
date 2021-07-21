all: stl1 stl2 stl3

stl1: stl1.o
	g++ -o $@ $<

stl2: stl2.o
	g++ -o $@ $<

stl3: stl3.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f stl? *.o
