all:toto
	
	./toto
principal.o: principal.c circonference.h surface.h
	gcc -c principal.c -Wall
circonference.o: circonference.c pi.h
	gcc -c circonference.c -Wall
surface.o:surface.c pi.h
	gcc -c surface.c -Wall
toto:principal.o circonference.o surface.o
	gcc  principal.o circonference.o surface.o -o toto
	
clean:
	rm f*.o
	rm toto
	
