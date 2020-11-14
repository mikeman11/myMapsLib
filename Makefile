#--------------------------------------------------------------

CC=gcc
AR=ar
FLAGS=-Wall -g

#--------------------------------------------------------------

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

basicMath.o:
	$(CC) $(FLAGS) -c -fPIC basicMath.c

power.o: 
	$(CC) $(FLAGS) -c -fPIC power.c

libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o

mains.out: main.o libmyMath.a 
	$(CC) $(FLAGS) main.o libmyMath.a -o mains.out

maind.out: main.o libmyMath.so
	$(CC) $(FLAGS) main.o libmyMath.so -Wl,-rpath=$(PWD) -o maind.out

#--------------------------------------------------------------

.PHONY: mymaths mymathd mains maind all clean

# Creating static library
mymaths: basicMath.o power.o libmyMath.a

# Creating dynamic library
mymathd: basicMath.o power.o libmyMath.so

mains: mains.out

maind: maind.out

all: mains maind

clean:
	rm power.o basicMath.o libmyMath.a libmyMath.so main.o mains.out maind.out

#--------------------------------------------------------------