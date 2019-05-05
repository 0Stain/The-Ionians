#include "background.h"
#include <SDL/SDL_image.h>
int loadBackground(Background *Backg)
{
// load background
Backg->backgroundImg = IMG_Load("../images/back.png");
if (Backg->backgroundImg == NULL) {
printf("Unable to load bg: %s\n", SDL_GetError());
return (-1);
}

Backg->backgroundCollide = IMG_Load("../images/back.png");
if (Backg->backgroundCollide == NULL) {
printf("Unable to load bg: %s\n", SDL_GetError());
return (-1);
}
return (0);
}


void initBackground(Background *Backg)
{
Backg->backgroundPos.x=0;
Backg->backgroundPos.y=0;
Backg->backgroundPos.w=SCREEN_W;
Backg->backgroundPos.h=320;
}

void blitBackground(Background*Backg,SDL_Surface *screen)
{

SDL_BlitSurface(Backg->backgroundImg, &(Backg->backgroundPos), screen,NULL); //scrolling horizontal

}

void freeBackground(Background *Backg)
{
SDL_FreeSurface(Backg->backgroundImg);
}





int loadBackground2(Background2 *Backg)
{
// load background
Backg->backgroundImg = IMG_Load("../images/back.png");
if (Backg->backgroundImg == NULL) {
printf("Unable to load bg2: %s\n", SDL_GetError());
return (-1);
}

Backg->backgroundCollide = IMG_Load("../images/back.png");
if (Backg->backgroundCollide == NULL) {
printf("Unable to load bg2: %s\n", SDL_GetError());
return (-1);
}
return (0);
}


void initBackground2(Background2 *Backg)
{
Backg->backgroundPos.x=0;
Backg->backgroundPos.y=0;
Backg->backgroundPos.w=SCREEN_W;
Backg->backgroundPos.h=320;
Backg->backgroundPos2.x=0;
Backg->backgroundPos2.y=320;
Backg->backgroundPos2.w=SCREEN_W;
Backg->backgroundPos2.h=320;
}

void blitBackground2(Background2*Backg,SDL_Surface *screen)
{

SDL_BlitSurface(Backg->backgroundImg, &(Backg->backgroundPos), screen,&(Backg->backgroundPos2)); //scrolling horizontal

}

void freeBackground2(Background2 *Backg)
{
SDL_FreeSurface(Backg->backgroundImg);
}
