all: arrays1 friends1 overloading1

# Linking obj files to create executable.
arrays1: arrays1.o
	g++ -o $@ $<

friends1: friends1.o
	g++ -o $@ $<

overloading1: overloading1.o
	g++ -o $@ $<

# Compiling only to create obj files from source files.
# Built-in in most make implementations.
.cpp.o:
	g++ -o $@ -c $<

clean:
	rm -f arrays1 friends1 overloading1 *.o
