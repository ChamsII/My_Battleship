##
## Makefile for Makefile in /home/alimou_c/Battle01/alimou_c/my_battleship
## 
## Made by ALI MOUIGNI Chamsoudine
## Login   <alimou_c@etna-alternance.net>
## 
## Started on  Sat Oct 25 11:04:00 2014 ALI MOUIGNI Chamsoudine
## Last update Sat Oct 25 17:39:51 2014 ALI MOUIGNI Chamsoudine
##
CC	=	gcc
CFLAGS	=	-W -Wall -ansi -pedantic

OBJ	=	main.o fonction.o readline.o my_fonction.o globales.o

all:	battleship

battleship:	$(OBJ)
		@echo Files Battleship copmiled -----> start rynning
		$(CC) $(CFLAGS) -o battleship $(OBJ)

main.o:	main.c
	@echo Compiling: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

fonction.o:	fonction.c
		@echo Compiling: fonction.c
		$(CC) $(CFLAGS) -c fonction.c -o fonction.o

globales.o:	globales.c
		@echo Compiling Compiling: globales.c
		$(CC) $(CFLAGS) -c globales.c -o globales.o

my_fonction.o:	my_fonction.c
		@echo Compiling: fonction.c
		$(CC) $(CFLAGS) -c my_fonction.c -o my_fonction.o

readline.o:	readline.c
		@echo Compiling: readline.c
		$(CC) $(CFLAGS) -c readline.c -o readline.o

main.c:	my_battle.h
fonction.c:	my_battle.h
my_fonction.c:	my_battle.h
globales.c:	my_battle.h

clean:
	@echo Delete $(OBJ) battleship
	@echo Delete $(OBJ) battleship
	rm -Rf $(OBJ) battleship