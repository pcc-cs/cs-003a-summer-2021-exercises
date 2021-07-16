# $^ means all the files above.
# $< means only the first file above.

all: copy1 copy2

copy1: copy1.o student.o member.o
	g++ -o $@ $^

copy2: copy2.o student.o member.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f copy? *.o
