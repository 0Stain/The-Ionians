#include <SDL/SDL.h>
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "options.h"
#include "animation.h"



int main ()
{  


	SDL_Surface *screen;
	if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
		fprintf( stderr,"Unable to init SDL" );
		return 1;
	}
	atexit(SDL_Quit);
   screen = SDL_SetVideoMode(700, 500, 32,SDL_HWSURFACE|SDL_DOUBLEBUF | SDL_SRCALPHA);
	if ( !screen ) {
		fprintf(stderr,"Unable to set /n");
		return 1;
	}

			SDL_WM_SetCaption("The lost ring",NULL);

animation2(screen);
load(screen);	
menu(screen); 
//jeu principal


	return 0;
}
