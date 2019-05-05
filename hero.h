#ifndef Voiture_H
#define Voiture_H
#include <SDL/SDL.h>
#include "background.h"




struct hero{
SDL_Rect position;
SDL_Surface * image[6];


int direction; 
int moving; 
};
typedef struct hero hero;


struct hero2{
SDL_Rect position2;
SDL_Surface * image[6];

int direction; 
int moving; 


};
typedef struct hero2 hero2;
int loadheroImages(hero* A);

void inihero(hero *A);

void movehero(hero *A,Background *B);

void freehero(hero*A);



int loadheroImages2(hero2 * A);

void inithero2(hero2 *A);

void movehero2(hero2 *A,Background2 *B);

void freehero2(hero2 *A);
#endif
