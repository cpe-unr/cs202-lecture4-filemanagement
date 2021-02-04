files: main.o datamanager.o
	g++ -o files main.o datamanager.o

main.o: main.cpp
	g++ -c main.cpp -o main.o

datamanager.o: datamanager.cpp datamanager.h
	g++ -c datamanager.cpp

clean:
	rm *.o files