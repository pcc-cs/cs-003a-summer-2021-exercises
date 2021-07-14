# $^ means all the files above.
# $< means only the first file above.

all: member.o student.o

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f *.o
