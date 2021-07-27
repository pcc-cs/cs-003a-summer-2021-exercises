all: lambda1 lambda2 lambda3

lambda1: lambda1.o
	g++ -o $@ $<

lambda2: lambda2.o
	g++ -o $@ $<

lambda3: lambda3.o
	g++ -o $@ $<

.cpp.o:
	g++ -c -o $@ $<

clean:
	rm -f lambda? *.o