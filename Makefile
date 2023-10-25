LEX=flex
YACC=bison
CC=gcc

run: 3AC.l 3AC.y
	$(YACC) -d 3AC.y 
	$(LEX) 3AC.l	
	$(CC) -o $@ 3AC.tab.c scanner.c 

clean: 
	rm -rf run 3AC.tab.* scanner.h scanner.c run
