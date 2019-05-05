#include <SDL/SDL.h>
#include "defs.h"
#include "hero.h"
#include "background.h"
#include <SDL/SDL_image.h>
#include <stdio.h>

int loadheroImages(hero * A)
{
int i;
char im[50];
char im0[]="../images/hero";
char png[]=".png";
for(i=0; i<6; i++) {
sprintf(im,"%s%d%s",im0,i,png);
A->image[i] = IMG_Load(im);
if (A->image[i]== NULL) {
printf("Unable to load  hero images:\n", SDL_GetError());
return (-1);
}


}
return(0);
}

void inithero2(hero2 *A)
{
A->direction=0;
A->position2.x=10;
A->position2.y=235- A->image[0]->h;
A->position2.w=A->image[0]->w;
A->position2.h=A->image[0]->h;


A->moving=0;
}

void movehero(hero *A,Background *B)
{
B->backgroundPos.x=B->backgroundPos.x+5; 
}
void movehero11(hero *A,Background *B)
{
B->backgroundPos.x=B->backgroundPos.x-5; 
}

void freehero(hero *A)
{
int i;
for(i=0; i<4; i++)
SDL_FreeSurface(A->image[i]);
}




int loadheroImages2(hero2 * A)
{
int j;
char im[50];
char im0[]="../images/hero";
char png[]=".png";
for(j=0; j<6; j++) {
sprintf(im,"%s%d%s",im0,j,png);
A->image[j] = IMG_Load(im);
if (A->image[j]== NULL) {
printf("Unable to load  hero2 images p:\n", SDL_GetError());
return (-1);
}


}
return(0);
}

void inithero(hero *A)
{
A->direction=0;
A->position.x=10;
A->position.y=505- A->image[0]->h;
A->position.w=A->image[0]->w;
A->position.h=500-A->image[0]->h;
A->moving=0;
}

void movehero2(hero2 *A,Background2 *B)
{
B->backgroundPos.x=B->backgroundPos.x+5; 
}
void movehero22(hero2 *A,Background2 *B)
{
B->backgroundPos.x=B->backgroundPos.x-5; 
}

void freehero2(hero2 *A)
{
int i;
for(i=0; i<3; i++)
SDL_FreeSurface(A->image[i]);
}
