# $^ means all the files above.
# $< means only the first file above.

all: destructors1 copy1 copy2

destructors1: destructors1.o student.o member.o
	g++ -o $@ $^

copy1: copy1.o student.o member.o
	g++ -o $@ $^

copy2: copy2.o student.o member.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f destructors? copy? *.o
