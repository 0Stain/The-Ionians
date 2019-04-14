#include<stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include<SDL/SDL_audio.h>
#include "perso.h"

void init_perso(perso *p)
{
	p->image=IMG_Load("detective.png");
   if  ( p->image ==  NULL )  { 
	         printf ( "Erreur: %s \n " , SDL_GetError ()); 
	         exit ( 1 ); 
	     } 
	p->pos.x=20;
	p->pos.y=30;
	p->pos.w= p->image->w;
	p->pos.h= p->image->h;
}
void affiche_perso(perso *p,SDL_Surface *screen)
{   
SDL_SetColorKey(p->image,SDL_SRCCOLORKEY,SDL_MapRGB(p->image->format,255,255,255));
SDL_BlitSurface(p->image, NULL,screen, &p->pos);

}
	
void deplacerclaviersouris(SDL_Event event,perso *p,SDL_Surface *screen)
{
while(SDL_PollEvent(&event))
    {
     switch(event.type)
     {
        case SDL_KEYDOWN:
          if(event.key.keysym.sym == SDLK_LEFT )
          {
           p->pos.x -= 5;
            affiche_perso(p,screen);
         }
          if(event.key.keysym.sym == SDLK_RIGHT)
          {
            p->pos.x += 5;
            affiche_perso(p,screen);
         }
         if(event.key.keysym.sym == SDLK_UP)
          {

           p->pos.y -= 20;
             affiche_perso(p,screen);
         }
          if(event.key.keysym.sym == SDLK_DOWN)
          {
          p->pos.y += 5;
           affiche_perso(p,screen);
         }
        break;
        case SDL_MOUSEBUTTONUP:
          if(event.button.button == SDL_BUTTON_LEFT )
          {
            p->pos.x -= 5;
            affiche_perso(p,screen);
          }
          if(event.button.button == SDL_BUTTON_RIGHT)
          {
           p->pos.x += 5;
            affiche_perso(p,screen);
          }
          if(event.button.button== SDL_BUTTON_WHEELUP)
          {

            p->pos.y -= 20;
             affiche_perso(p,screen);
          }
          if(event.button.button == SDL_BUTTON_WHEELDOWN)
          {
            p->pos.y += 5;
          affiche_perso(p,screen);
          }
        break;
        case SDL_QUIT:

        break;
      }
    }
}
void colision_bb(perso *p,SDL_Rect penemie)
{if( (p->pos.x +p->pos. w< penemie. x) || (p->pos.x>  penemie. x + penemie. w)|| (p->pos.y + p->pos.h< penemie. y) || (p->pos.y>  penemie. y + penemie. h ))
 {
     printf("pas de colision \n");
    // return 0;
     
 }
 else 
 {
     printf("il ya colision \n");
     //return 1;
     
     
 }
}

