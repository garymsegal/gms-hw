# A simple makefile

hello:	helloworld.o helloworld2.o helloworld3.o
	g++ -o hello helloworld.o helloworld2.o helloworld3.o

helloworld.o: helloworld.cpp
	g++ -c helloworld.cpp

helloworld2.o: helloworld2.cpp
	g++ -c helloworld2.cpp
	
helloworld3.o: helloworld3.cpp
	g++ -c helloworld3.cpp

clean:
	rm *.o hello
