all:
	flex main.l
	bison -d main.y
	gcc -Wall lex.yy.c main.tab.c -o main.o
clean:
	rm main.o