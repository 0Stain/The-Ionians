prog:main.o  animation.o menu.o
	gcc main.o  animation.o menu.o  -o prog -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -g
main.o:main.c
	gcc -c main.c -g

menu.o:menu.c
	gcc -c menu.c -g
animation.o:animation.c
	gcc -c animation.c -g
clean:
	rm -fr *.o
mrproper:clean
	rm -f prog
