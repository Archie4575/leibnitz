CC=g++
CFLAGS=-c -Wall

all: leibnitz
	sudo cp leibnitz /usr/local/bin

leibnitz: main.o
	$(CC) main.o -o leibnitz

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm -rf *.o leibnitz

uninstall:
	sudo rm /usr/local/bin/leibnitz
	make clean
