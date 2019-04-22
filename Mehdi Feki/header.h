#ifndef HEADER_H_
#define HEADER_H_
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <math.h>
typedef enum state state;
enum state {waitin,followin, attackin} ;


typedef struct {
int life;
SDL_Surface * image;
SDL_Rect pos_e;

state state;


}ennemi;






void setclip(SDL_Rect* clip);

void afficher(ennemi*es,SDL_Surface *screen,SDL_Rect clip [],int frame);

void initi(ennemi *es,char file_name[],int x, int y);






#endif /* HEADER_H_ */
