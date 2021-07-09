all: bst1

bst1: bst1.o node.o
	g++ -o $@ $^

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f bst? *.o
