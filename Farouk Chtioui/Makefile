prog:perso.o main.o  
	gcc main.o perso.o -o prog -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
main.o: main.c
	gcc -c main.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
perso.o: perso.c
	gcc -c perso.c -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf        
clean: 
	rm *.o prog -f
