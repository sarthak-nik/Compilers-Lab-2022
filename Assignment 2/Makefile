ass2: main.o libass2_20CS30035.a
	cc main.o -L. -lass2_20CS30035 -o ass2

main.o: main.c myl.h
	cc -c main.c

libass2_20CS30035.a: ass2_20CS30035.o
	ar -rcs libass2_20CS30035.a ass2_20CS30035.o

ass2_20CS30035.o: ass2_20CS30035.c myl.h
	cc -c ass2_20CS30035.c

clean:
	rm ass2 main.o libass2_20CS30035.a ass2_20CS30035.o