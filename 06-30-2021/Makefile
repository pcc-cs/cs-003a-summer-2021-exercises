all: destructors1 copy1

destructors1: destructors1.o
	g++ -o $@ $<

copy1: copy1.o
	g++ -o $@ $<

.cpp.o:
	g++ -o $@ -c $<

clean:
	rm -f destructors? copy? *.o
