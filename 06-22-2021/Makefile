all: functions1 types1

functions1: functions1.cpp
	# As if I typed "g++ -o functions1 functions1.cpp"
	g++ -o $@ $<

types1: types1.cpp
	g++ -o $@ $<

clean:
	# ? is called a "wild card" matching any single character
	rm -f functions? types?