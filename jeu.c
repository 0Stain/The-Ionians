#include <SDL/SDL.h>
#include "defs.h"
#include "background.h"
#include "hero.h"
#include "jeu.h"


int jouer(SDL_Surface * screen)
{
int done = 0;
int i=0;
int j=0;
hero h;
hero2 h2;
Background Backg;
Background2 Backg2;


SDL_Event event;
int keysHeld[323] = {0}; 



if(loadheroImages(&h) == -1) {
printf("Erreuer Chargement Voiture Images\n");
return(-1);

}

if(loadBackground(&Backg) == -1) {
printf("Erreuer Chargement Background Images\n");
return(-1);
}
if(loadheroImages2(&h2) == -1) {
printf("Erreuer Chargement Voiture Images\n");
return(-1);

}

if(loadBackground2(&Backg2) == -1) {
printf("Erreuer Chargement Background Images\n");
return(-1);
}


initBackground(&Backg);
initBackground2(&Backg2);
inithero(&h);

inithero2(&h2);


// program Game loop
SDL_EnableKeyRepeat(SDL_DEFAULT_REPEAT_DELAY,SDL_DEFAULT_REPEAT_INTERVAL);


while(!done) {

while (SDL_PollEvent(&event)) {

switch (event.type) {

case SDL_QUIT:
done = 1;
break;
case SDL_KEYDOWN:
h.moving=1; 
h2.moving=1;
keysHeld[event.key.keysym.sym] = 1;
break;
case SDL_KEYUP:
keysHeld[event.key.keysym.sym] = 0;
h.moving=0;

h2.moving=0;

break;
}

if (keysHeld[SDLK_ESCAPE])
done = 1;



if(keysHeld[SDLK_RIGHT]) {
if(i==2)
{i=0;}
h.direction=0;
movehero(&h,&Backg2);
i++;

}	

if(keysHeld[SDLK_LEFT]) {
if(i<3 || i==5)
{i=3;}
h.direction=1; 
movehero11(&h,&Backg2);
i++;

}





if(keysHeld[SDLK_d]) {
if(j==2)
{j=0;}
h2.direction=0;
movehero2(&h2,&Backg);
j++;

}	

if(keysHeld[SDLK_q]) {
if(j<3 || j==5)
{j=3;}
h2.direction=1; 
movehero22(&h2,&Backg);
j++;

}







} 
i=i%6;
j=j%6;

blitBackground(&Backg,screen);
blitBackground2(&Backg2,screen);






SDL_BlitSurface(h.image[i],NULL,screen,&h.position);

SDL_BlitSurface(h2.image[j],NULL,screen,&h2.position2);


SDL_Flip(screen);



}



freehero(&h);
freeBackground(&Backg);
freehero2(&h2);
freeBackground2(&Backg2);

return(0);
}
