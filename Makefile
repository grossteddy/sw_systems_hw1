all: libmyMath.a libmyMath.so mains maind

mains: main.o libmyMath.a
	gcc -Wall -g -o mains main.o libmyMath.a

maind: main.o
	gcc -Wall -g -o maind main.o ./libmyMath.so

libmyMath.a: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o

libmyMath.so: basicMath.o power.o
	gcc -shared -o libmyMath.so basicMath.o power.o

power.o: power.c
	gcc -Wall -g -c power.c

basicMath.o: basicMath.c
	gcc -Wall -g -c basicMath.c

main.o: main.c myMath.h
	gcc -Wall -g -c main.c

.PHONY: clean mymaths mymathd

mymaths: libmyMath.a

mymathd: libmyMath.so

clean:
	rm -f *.o *.a *.so mains maind