prog:main.o initback.o affichback.o
	gcc main.o initback.o affichback.o -o prog -lSDL -lSDL_image  -g
initback.o:initback.c
	gcc -c initback.c -g
affichback.o:affichback.c
	gcc -c affichback.c -g

main.o:main.c
	gcc -c main.c -g

