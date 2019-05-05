#include "defs.h"
#include "jeu.h"
#include <SDL/SDL.h>


int main ( int argc, char** argv )
{

SDL_Surface *screen;

if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
printf( "Unable to init SDL: %s\n", SDL_GetError() );
return 1;
}


atexit(SDL_Quit);


screen = SDL_SetVideoMode(SCREEN_W, SCREEN_H, 32,
SDL_HWSURFACE|SDL_DOUBLEBUF | SDL_SRCALPHA);
if ( !screen ) {
printf("Unable to set  video settings: %s\n", SDL_GetError());
return 1;
}


jouer(screen);



printf("Good bye\n");
return 0;
}
