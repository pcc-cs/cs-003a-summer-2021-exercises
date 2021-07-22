all: stl1 exceptions1 exceptions2 exceptions3 exceptions4

stl1: stl1.o
	g++ -o $@ $<

exceptions1: exceptions1.o
	g++ -o $@ $<

exceptions2: exceptions2.o
	g++ -o $@ $<

exceptions3: exceptions3.o
	g++ -o $@ $<

exceptions4: exceptions4.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f stl? exceptions? *.o
