#ifndef HEADER_H_
#define HEADER_H_
#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include <math.h>
typedef enum state state;
enum state {waitin,followin, attackin} ;  //enum :une seule 


typedef struct {
int life;
SDL_Surface * image;
SDL_Rect pos_e;  //mettre la pos de l image en definissant les valeurs x ,y 

state state;


}ennemi;






void set_clips(SDL_Rect* clip);

void afficher_e(ennemi*es,SDL_Surface *screen,SDL_Rect clip [],int frame);

void initialise_en(ennemi *es,char file_name[],int x, int y);






#endif /* HEADER_H_ */
