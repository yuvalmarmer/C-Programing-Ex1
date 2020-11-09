
CC = gcc
FLAGS = -Wall 

all: maind mains 

maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o -L. -lmyMath

mains: main.o libmyMath.a
	$(CC) main.c -o mains -L. -l:libmyMath.a 
	
mymaths: libmyMath.a

libmyMath.a: basicMath.o power.o
	ar rcs libmyMath.a basicMath.o power.o

libmyMath.so: basicMath.o power.o
	$(CC) -shared -Wall power.o basicMath.o -o libmyMath.so

basicMath.o: basicMath.c myMath.h
	$(CC) -c $(FLAGS) -Werror -fPIC basicMath.c 

power.o: power.c myMath.h
	$(CC) -c $(FLAGS) -Werror -fPIC power.c 

mymathd: libmyMath.so

main.o: main.c 
	$(CC) -c $(FLAGS)  main.c

.PHONY: clean

clean:
	rm -rf *.o *.a *.gch *.so 
