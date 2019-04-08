#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "header.h"




int main(void) {

int x=10,y=30;
	int running = 1;//Game loop
	int moveX = 1000, moveY = 200, velX = 0, velY = 0;//Char mouvment
	int now = 0, ex = 0, p_fps = 20, dt = 0;//FPS
	float delta_s = 0;
	//Periode_Fps = 33 => FPS = 30 img/s
	//Periode_Fps = 20 => FPS = 50 img/s

   ennemi e;
	SDL_Event event;  //un element qui nous permet de faire un lien avec notre fonction 


	SDL_Surface *screen;  //creer une surface et faire un pointeur de surface 
	SDL_Surface *image;
      
	
	SDL_Rect clip[11] ;  //mettre la position de l image et definir x et y 

char file_name[]="CharacterAnimation.png";
	


SDL_Init(SDL_INIT_EVERYTHING);  // initialiser tout 
screen = SDL_SetVideoMode(1240, 720, 0, SDL_HWSURFACE | SDL_DOUBLEBUF);  //set,vid:fournir mode video en specifiant la langeur la hauteur et bits par pixel 
//hw : met la surface dans la memoire de la cg et les blits seront plus rapides 
//dou: valide seulement avec hw met a jour l ecran 


//	image = SDL_LoadBMP("background.bmp");
	initialise_en(&e,file_name,x,y);  //f
	set_clips(clip);  //f
	
	

	//SDL_SetColorKey(ennemi, SDL_SRCCOLORKEY, SDL_MapRGB(Detective->format, 255, 255, 255));
	
//setrects(&clip);
int frame = 0 ;
set_clips(clip);
	while (running) {//game loop

		SDL_Flip(screen);  //faire signe a la fentre d'afficher le rendu 
			 afficher_e(&e,screen,clip,frame);
			SDL_Delay(100);   //attendre un nb specifie de millisecondes avant de revenir
			frame ++ ;
			if (frame == 5)
				frame = 0;

			








	}//gameloop
	SDL_FreeSurface(image);   
	
	
	SDL_QUIT;
}
