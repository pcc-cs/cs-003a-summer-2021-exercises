# $^ means all the files above.
# $< means only the first file above.

all: destructors1

destructors1: destructors1.o student.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f destructors? *.o
