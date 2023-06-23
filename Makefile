CC = g++
FLAGS = -std=c++98 -Wall -g
OBJS = lotto.o

all:hw05

hw03: hw05.cpp lotto.h lotto.o
	$(CC) $(FLAGS) hw05.cpp $(OBJS) -o hw05 
lotto.o: lotto.cpp lotto.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o
clean:
	rm *.o hw05
tar:
	tar cf hw05.tar hw05.scr Makefile hw05.cpp lotto.cpp lotto.h Questions.txt
