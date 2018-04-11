chat_service : main.o network_manager.o 
	g++  -o chat_sevrice main.o  network_manager.o csapp.o -lpthread

main.o : main.cpp
	g++ -c main.cpp
network_manager.o: network_manager.cpp network_manager.hpp
	g++ -c network_manager.cpp csapp.cpp
csapp.o: csapp.cpp csapp.h
	g++ -c csapp.cpp
network_impl.o : network_impl.hpp network_impl.cpp
	g++ -c network_impl.cpp
clean:
	rm *.o
