#include<stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include<SDL/SDL_audio.h>
#include "perso.h"
void main()
{
int cont=1;
SDL_Surface *menu=NULL;
SDL_Surface *ecran=NULL;
SDL_Surface *enemie=NULL;
perso p; SDL_Event event;
SDL_Event even;
SDL_Rect positionmenu;
SDL_Rect penemie;
//positionimage menu 
positionmenu.x=0;
positionmenu.y=0;

  enemie=IMG_Load("pac-man.png");
//position enemie
penemie.x=200;
penemie.y=200;
penemie.h=enemie->h;
penemie.w=enemie->w;
SDL_Init(SDL_INIT_AUDIO|SDL_INIT_VIDEO);
ecran=SDL_SetVideoMode(1600,600, 32,SDL_HWSURFACE|SDL_DOUBLEBUF);
if (ecran==NULL)
printf ("Erreur");
menu=SDL_LoadBMP("background.bmp");
if(!enemie)
  {
     printf("Error: %s\n",SDL_GetError());

  }

 init_perso(&p);
while (cont){


SDL_BlitSurface(menu,NULL,ecran,&positionmenu);
SDL_BlitSurface(enemie,NULL,ecran,&penemie);
	

	
 affiche_perso(&p,ecran);
 deplacerclaviersouris(event,&p,ecran);
colision_bb(&p,penemie);
SDL_Flip (ecran);


}
SDL_Quit();	
}


