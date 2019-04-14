#ifndef PERSO
#define PERSO

typedef struct{
	SDL_Surface *image;
	SDL_Rect pos;
}perso;
void init_perso(perso *p);
void affiche_perso(perso *p,SDL_Surface *screen);
void deplacerclaviersouris(SDL_Event event,perso *p,SDL_Surface *screen);
void colision_bb(perso *p,SDL_Rect penemie);
#endif

