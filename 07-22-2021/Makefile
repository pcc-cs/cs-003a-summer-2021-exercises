all: exceptions1 templates1 templates2 templates3

exceptions1: exceptions1.o
	g++ -o $@ $<

templates1: templates1.o
	g++ -o $@ $<

templates2: templates2.o
	g++ -o $@ $<

templates3: templates3.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f exceptions? templates? *.o