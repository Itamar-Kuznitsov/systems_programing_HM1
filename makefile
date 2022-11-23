
CC=gcc
AR=ar
FLAGS= -Wall -g

all: loops loopd recursived recursives mains maindloop maindrec

mains: main.o libclassrec.a
	$(CC) $(FLAGS) main.o ./libclassrec.a -o mains -lm
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS) main.o ./libclassloops.so -o maindloop -lm
maindrec: main.o libclassrec.so
	$(CC) $(FLAGS) main.o ./libclassrec.so -o maindrec -lm


loops: libclassloops.a
loopd: libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so


libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o	
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o	

libclassloops.so: basicClassification.c advancedClassificationLoop.c
	$(CC) $(FLAGS) -fPIC -shared -o ./libclassloops.so basicClassification.c advancedClassificationLoop.c	
libclassrec.so: basicClassification.c advancedClassificationRecursion.c
	$(CC) $(FLAGS) -fPIC -shared -o ./libclassrec.so basicClassification.c advancedClassificationRecursion.c	



main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
basicClassification.o: basicClassification.c 
	$(CC) $(FLAGS)  -c basicClassification.c
advancedClassificationLoop.o: advancedClassificationLoop.c 
	$(CC) $(FLAGS)  -c advancedClassificationLoop.c
advancedClassificationRecursion.o: advancedClassificationRecursion.c 
	$(CC) $(FLAGS)  -c advancedClassificationRecursion.c



.PHONY: clean make all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec







