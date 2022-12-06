output.txt: a.out ass3_20CS30005_20CS30035_test.c
	./a.out < ass3_20CS30005_20CS30035_test.c > output.txt

a.out: lex.yy.c ass3_20CS30005_20CS30035.c
	cc lex.yy.c ass3_20CS30005_20CS30035.c -lfl

lex.yy.c: ass3_20CS30005_20CS30035.l 
	flex ass3_20CS30005_20CS30035.l

ass3_20CS30005_20CS30035.c:
	touch ass3_20CS30005_20CS30035.c

clean:
	rm a.out lex.yy.c output.txt