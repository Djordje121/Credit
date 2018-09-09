#simple make file for cred9t program compalation

# build an executable named credit from credit.c

MY_OBJECTS = system.o helpers.o

#automatic variables $^  $@ -pre recuisets - target

.PHONY: all
all: credit

%: %.c $(MY_OBJECTS) system.o helpers.o 
	$(CC) -std=c99 -I ./lib  $^ -o $@ -lm


system.o: system.c system.h
	$(CC) -c  $^ 

helpers.o: helpers.c helpers.h
	$(CC) -c $^

.PHONY: clean
clean:
	rm -f credit $(MY_OBJECTS) credit.h.gch system.h.gch helpers.h.gch 

MY_TARGET = credit