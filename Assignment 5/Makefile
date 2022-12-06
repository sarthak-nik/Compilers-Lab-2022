
a.out: lex.yy.o ass5_20CS30005_20CS30035.tab.o ass5_20CS30005_20CS30035_translator.o
	g++ lex.yy.o ass5_20CS30005_20CS30035.tab.o ass5_20CS30005_20CS30035_translator.o -lfl

ass5_20CS30005_20CS30035_translator.o: ass5_20CS30005_20CS30035_translator.h ass5_20CS30005_20CS30035_translator.cxx
	g++ -c ass5_20CS30005_20CS30035_translator.h
	g++ -c ass5_20CS30005_20CS30035_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass5_20CS30005_20CS30035.tab.o: ass5_20CS30005_20CS30035.tab.c
	g++ -c ass5_20CS30005_20CS30035.tab.c

lex.yy.c: ass5_20CS30005_20CS30035.l ass5_20CS30005_20CS30035.tab.h ass5_20CS30005_20CS30035_translator.h
	flex ass5_20CS30005_20CS30035.l

ass5_20CS30005_20CS30035.tab.c: ass5_20CS30005_20CS30035.y
	bison -dtv ass5_20CS30005_20CS30035.y

ass5_20CS30005_20CS30035.tab.h: ass5_20CS30005_20CS30035.y
	bison -dtv ass5_20CS30005_20CS30035.y

ass5_20CS30005_20CS30035.c:
	touch ass5_20CS30005_20CS30035.c

test: a.out
	
	@echo "\nRunning on test inputs.\n"
	./a.out < ass5_20CS30005_20CS30035_test1.c > ass5_20CS30005_20CS30035_quads1.out
	./a.out < ass5_20CS30005_20CS30035_test2.c > ass5_20CS30005_20CS30035_quads2.out
	./a.out < ass5_20CS30005_20CS30035_test3.c > ass5_20CS30005_20CS30035_quads3.out
	./a.out < ass5_20CS30005_20CS30035_test4.c > ass5_20CS30005_20CS30035_quads4.out
	./a.out < ass5_20CS30005_20CS30035_test5.c > ass5_20CS30005_20CS30035_quads5.out
	@echo "\nOutputs are written to the respective test files.\n"

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch *_quads*.out