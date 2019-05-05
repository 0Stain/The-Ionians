prog:main.o hero.o jeu.o background.o 
	gcc main.o hero.o jeu.o background.o -o prog -lSDL -lSDL_image -g
main.o:main.c
	gcc -c main.c -g
jeu.o:jeu.c
	gcc -c jeu.c -g
hero.o:hero.c
	gcc -c hero.c -g
background.o:background.c
	gcc -c background.c -g

clean:
	rm -fr *.o
mrproper:clean
	rm -f prog
