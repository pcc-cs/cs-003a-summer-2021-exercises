all: list1

list1: list1.o list.o node.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f list? *.o
