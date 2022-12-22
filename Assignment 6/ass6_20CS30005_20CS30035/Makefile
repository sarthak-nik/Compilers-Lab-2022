tinyC: lex.yy.o ass6_20CS30005_20CS30035.tab.o ass6_20CS30005_20CS30035_translator.o ass6_20CS30005_20CS30035_target_translator.o
	g++ lex.yy.o ass6_20CS30005_20CS30035.tab.o ass6_20CS30005_20CS30035_translator.o ass6_20CS30005_20CS30035_target_translator.o -lfl -o tinyC
	@echo "\nMake process successful. The binary generated is tinyC\n"

ass6_20CS30005_20CS30035_target_translator.o: ass6_20CS30005_20CS30035_target_translator.cxx
	g++ -c ass6_20CS30005_20CS30035_target_translator.cxx

ass6_20CS30005_20CS30035_translator.o: ass6_20CS30005_20CS30035_translator.h ass6_20CS30005_20CS30035_translator.cxx
	g++ -c ass6_20CS30005_20CS30035_translator.h
	g++ -c ass6_20CS30005_20CS30035_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

ass6_20CS30005_20CS30035.tab.o: ass6_20CS30005_20CS30035.tab.c
	g++ -c ass6_20CS30005_20CS30035.tab.c

lex.yy.c: ass6_20CS30005_20CS30035.l ass6_20CS30005_20CS30035.tab.h ass6_20CS30005_20CS30035_translator.h
	flex ass6_20CS30005_20CS30035.l

ass6_20CS30005_20CS30035.tab.c: ass6_20CS30005_20CS30035.y
	bison -dtv ass6_20CS30005_20CS30035.y

ass6_20CS30005_20CS30035.tab.h: ass6_20CS30005_20CS30035.y
	bison -dtv ass6_20CS30005_20CS30035.y

libass6_20CS30005_20CS30035.a: ass6_20CS30005_20CS30035.o
	ar -rcs libass6_20CS30005_20CS30035.a ass6_20CS30005_20CS30035.o

ass6_20CS30005_20CS30035.o: ass6_20CS30005_20CS30035.c myl.h
	gcc -c ass6_20CS30005_20CS30035.c

ass6_20CS30005_20CS30035.c:
	touch ass6_20CS30005_20CS30035.c

test: tinyC libass6_20CS30005_20CS30035.a
	@mkdir -p Test_Outputs
	@mkdir -p bin

	@echo "\nRunning Test 1\n"
	./tinyC 1 < Test_Inputs/ass6_20CS30005_20CS30035_test1.c > Test_Outputs/ass6_20CS30005_20CS30035_quads1.out
	mv ass6_20CS30005_20CS30035_1.s Test_Outputs/ass6_20CS30005_20CS30035_1.s
	gcc -c Test_Outputs/ass6_20CS30005_20CS30035_1.s -o Test_Outputs/ass6_20CS30005_20CS30035_1.o
	gcc Test_Outputs/ass6_20CS30005_20CS30035_1.o -o bin/test1 -L. -lass6_20CS30005_20CS30035 -no-pie

	@echo "\nRunning Test 2\n"
	./tinyC 2 < Test_Inputs/ass6_20CS30005_20CS30035_test2.c > Test_Outputs/ass6_20CS30005_20CS30035_quads2.out
	mv ass6_20CS30005_20CS30035_2.s Test_Outputs/ass6_20CS30005_20CS30035_2.s
	gcc -c Test_Outputs/ass6_20CS30005_20CS30035_2.s -o Test_Outputs/ass6_20CS30005_20CS30035_2.o
	gcc Test_Outputs/ass6_20CS30005_20CS30035_2.o -o bin/test2 -L. -lass6_20CS30005_20CS30035 -no-pie

	@echo "\nRunning Test 3\n"
	./tinyC 3 < Test_Inputs/ass6_20CS30005_20CS30035_test3.c > Test_Outputs/ass6_20CS30005_20CS30035_quads3.out
	mv ass6_20CS30005_20CS30035_3.s Test_Outputs/ass6_20CS30005_20CS30035_3.s
	gcc -c Test_Outputs/ass6_20CS30005_20CS30035_3.s -o Test_Outputs/ass6_20CS30005_20CS30035_3.o
	gcc Test_Outputs/ass6_20CS30005_20CS30035_3.o -o bin/test3 -L. -lass6_20CS30005_20CS30035 -no-pie

	@echo "\nRunning Test 4\n"
	./tinyC 4 < Test_Inputs/ass6_20CS30005_20CS30035_test4.c > Test_Outputs/ass6_20CS30005_20CS30035_quads4.out
	mv ass6_20CS30005_20CS30035_4.s Test_Outputs/ass6_20CS30005_20CS30035_4.s
	gcc -c Test_Outputs/ass6_20CS30005_20CS30035_4.s -o Test_Outputs/ass6_20CS30005_20CS30035_4.o
	gcc Test_Outputs/ass6_20CS30005_20CS30035_4.o -o bin/test4 -L. -lass6_20CS30005_20CS30035 -no-pie

	@echo "\nRunning Test 5\n"
	./tinyC 5 < Test_Inputs/ass6_20CS30005_20CS30035_test5.c > Test_Outputs/ass6_20CS30005_20CS30035_quads5.out
	mv ass6_20CS30005_20CS30035_5.s Test_Outputs/ass6_20CS30005_20CS30035_5.s
	gcc -c Test_Outputs/ass6_20CS30005_20CS30035_5.s -o Test_Outputs/ass6_20CS30005_20CS30035_5.o
	gcc Test_Outputs/ass6_20CS30005_20CS30035_5.o -o bin/test5 -L. -lass6_20CS30005_20CS30035 -no-pie

	@echo "\nRunning Test 6\n"
	./tinyC 6 < Test_Inputs/ass6_20CS30005_20CS30035_test6.c > Test_Outputs/ass6_20CS30005_20CS30035_quads6.out
	mv ass6_20CS30005_20CS30035_6.s Test_Outputs/ass6_20CS30005_20CS30035_6.s
	gcc -c Test_Outputs/ass6_20CS30005_20CS30035_6.s -o Test_Outputs/ass6_20CS30005_20CS30035_6.o
	gcc Test_Outputs/ass6_20CS30005_20CS30035_6.o -o bin/test6 -L. -lass6_20CS30005_20CS30035 -no-pie

	@echo "\nThe three address quads, assembly files and object files are in Test_Outputs/\n"
	@echo "The binaries for the test files are in bin/\n"

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o *.s *.a *.out *.gch tinyC Test_Outputs/* bin/*