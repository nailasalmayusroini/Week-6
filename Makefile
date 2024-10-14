# Target to compile the object file
struct: struct.o
	g++ struct.o -o struct.exe

# Target to compile the C++ program
struct.o: struct.cpp
	g++ -c struct.cpp -o struct.o

# Target to run the program (interactively)
run: struct
	./struct.exe

# Target to compile the object Test file
structTest: structTest.o
	g++ structTest.o -o structTest.exe

# Target to compile the C++ Test program
structTest.o: structTest.cpp
	g++ -c structTest.cpp -o structTest.o

# Target to run the Test program
test: structTest
	./structTest.exe

# Target to clean up compiled files
clean:
	rm -f struct.o structTest.o struct.exe structTest.exe
