CC = g++

main.exe: main.o singly-linked-list.o
	g++ -o main.exe main.o singly-linked-list.o

main.o: singly-linked-list.h main.cpp
	g++ -c -o main.o main.cpp

singly-linked-list.o : singly-linked-list.h singly-linked-list.cpp
	g++ -c -o singly-linked-list.o singly-linked-list.cpp
