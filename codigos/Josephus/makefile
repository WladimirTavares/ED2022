
main: cliente.o Josephus.o
	g++ cliente.o Josephus.o -o main

cliente.o : cliente.cpp
	g++ -c cliente.cpp -o cliente.o
	  
Josephus.o : Josephus.cpp Josephus.hpp
	g++ -c Josephus.cpp -o Josephus.o

