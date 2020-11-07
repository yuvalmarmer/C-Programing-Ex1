all: maind mains 

maind: main.o libmyMath.so exporter
	
	gcc -Wall -o maind main.o -L. -lmyMath

.PHONY: exporter
exporter:
	export LD_LIBRARY_PATH=/home/david/Desktop/C/EX1/yuval/Ex1:$LD_LIBRARY_PATH
	
mains: main.o libmyMath.a
	gcc main.c -o mains -L. -l:libmyMath.a 
	
mymaths: libmyMath.a

libmyMath.a: basicMath.o power.o
	ar rcs libmyMath.a basicMath.o power.o

libmyMath.so: basicMath.o power.o
	gcc -shared -Wall power.o basicMath.o -o libmyMath.so

basicMath.o: basicMath.c myMath.h
	gcc -c -Wall -Werror -fPIC basicMath.c 

power.o: power.c myMath.h
	gcc -c -Wall -Werror -fPIC power.c 

mymathd: libmyMath.so

main.o: main.c 
	gcc -c -Wall  main.c

.PHONY: clean

clean:
	rm -rf *.o *.a *.gch *.so 
