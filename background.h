#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <SDL/SDL.h>
#include "defs.h"

struct Background{
SDL_Surface *backgroundImg;
SDL_Surface *backgroundCollide;
SDL_Rect backgroundPos;
};
typedef struct Background Background;

struct Background2{
SDL_Surface *backgroundImg;
SDL_Surface *backgroundCollide;
SDL_Rect backgroundPos;
SDL_Rect backgroundPos2;
};
typedef struct Background2 Background2;

int loadBackground(Background *Backg);
void initBackground(Background *Backg);
void freeBackground(Background *Backg);
void blitBackground(Background*Backg,SDL_Surface *screen);
int loadBackground2(Background2 *Backg);
void initBackground2(Background2 *Backg);
void freeBackground2(Background2 *Backg);
void blitBackground2(Background2*Backg,SDL_Surface *screen);

#endif
