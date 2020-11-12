
CC = gcc
FLAGS = -Wall 

all: maind mains 

mymaths: libmyMath.a

mymathd: libmyMath.so

maind: main.o libmyMath.so
	$(CC) $(FLAGS) -Wl,-R. -L. -o maind main.o libmyMath.so

mains: main.o libmyMath.a
	$(CC) main.c -o mains -L. -l:libmyMath.a 
	
libmyMath.a: basicMath.o power.o
	ar rcs libmyMath.a basicMath.o power.o

libmyMath.so: basicMath.o power.o
	$(CC) -shared -Wall -o libmyMath.so power.o basicMath.o 

basicMath.o: basicMath.c myMath.h
	$(CC) -c $(FLAGS) -Werror -fPIC basicMath.c 

power.o: power.c myMath.h
	$(CC) -c $(FLAGS) -Werror -fPIC power.c 


main.o: main.c 
	$(CC) -c $(FLAGS)  main.c

.PHONY: clean

clean:
	rm -rf *.o *.a *.gch *.so 
