#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <stdio.h>
#include "SDL/SDL.h"
#include "header.h"
 
int main( int argc, char**argv)
 
{

   SDL_Init(SDL_INIT_VIDEO);
   
   SDL_Surface*screen=SDL_SetVideoMode(1980, 1080, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
   
   SDL_Surface*sprite=IMG_Load("background.png");
      ennemi e;
      int running=1;
   Uint32 x=-100, y=-100; 
   int t=10,m=300;
   SDL_Rect clip[11] ;
char file_name[]="CharacterAnimation2.png";
char file_name2[]="Character.png";
SDL_Surface* es=IMG_Load(file_name);
SDL_Rect espos_e;
espos_e.x=30;
espos_e.y=350;
	int frame = 0 ;
    SDL_Surface*punch;
punch=IMG_Load("punch.png");
   SDL_Rect decors={x,y, sprite->w, sprite->h};
   
  // SDL_Surface*personnage=IMG_Load("detective.png");
   
  //SDL_Rect perso={ screen->w/2 - personnage->w/2, screen->h/2 - personnage->w/2, personnage->w/2, personnage->h/2};
   //    SDL_BlitSurface( personnage, NULL,screen, &perso);

//coin(&screen,&sprite);



   for( SDL_Event evenement; evenement.type!=SDL_QUIT; SDL_PollEvent(&evenement))
    {
    SDL_FillRect(screen, NULL, SDL_MapRGB( screen->format, 0,0,0));
 switch( evenement.type){ 
   case SDL_KEYDOWN : 
    switch(evenement.key.keysym.sym){
    case SDLK_LEFT : 
            x=x+30;

initi(&e,file_name2,t,m);
	setclip2(clip);
		//SDL_Flip(screen);
			SDL_BlitSurface( sprite, NULL, screen, &decors);
SDL_BlitSurface(es,&clip[frame],screen,&espos_e);
SDL_Flip(screen);

			SDL_Delay(100);
			frame ++ ;
			if (frame == 5)
				frame = 0;

	 

 break; 
    case SDLK_RIGHT :
            x=x-30;

initi(&e,file_name,t,m);
	setclip(clip);
		//SDL_Flip(screen);
			SDL_BlitSurface( sprite, NULL, screen, &decors);
SDL_BlitSurface(es,&clip[frame],screen,&espos_e);
SDL_Flip(screen);

			SDL_Delay(100);
			frame ++ ;
			if (frame == 5)
				frame = 0;

	
break; 
    case SDLK_UP : ++y; 
break;
    case SDLK_DOWN : --y; 
break;
case SDLK_ESCAPE :
SDL_BlitSurface( sprite, NULL, screen, &decors);
SDL_BlitSurface(punch,NULL,screen,&espos_e);
break;
    } 
    
  break;
   }
    decors.x=x; decors.y=y;

   // SDL_BlitSurface( sprite, NULL, screen, &decors);
   // SDL_BlitSurface( personnage, NULL, ecran, &perso);

   // SDL_Flip(screen);
   }
     SDL_FreeSurface( clip);
   SDL_FreeSurface( sprite);
  // SDL_FreeSurface( personnage);
    return 0;
 }


