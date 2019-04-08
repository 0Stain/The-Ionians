#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include "header.h"
//init_enemi
void initialise_en(ennemi *es,char file_name[],int x, int y)
{
es->pos_e.x=x;
es->pos_e.y=y;
es->image=IMG_Load(file_name);

}





void afficher_e(ennemi*es,SDL_Surface *screen,SDL_Rect clip[] ,int frame)
{
SDL_BlitSurface(es->image,&clip[frame],screen,&es->pos_e);  //(im a afficher ,surf entiere copier ,surf de dest,pos de x et y a l'img afficg
 ) 
SDL_Flip(screen);  //faire signe a la fenetre pour afficher le rendu 


}



void set_clips(SDL_Rect* clip)
{
    //Clip the sprites
    clip[ 0 ].x =4 ;
    clip[ 0 ].y =256 ;
    clip[ 0 ].w =172 ;
    clip[ 0 ].h =356 ;
    
    clip[ 1 ].x = 169;
    clip[ 1 ].y =256  ;
    clip[ 1 ].w =172 ;
    clip[ 1 ].h =356 ;
    
    clip[ 2 ].x = 334;
    clip[ 2 ].y =256 ;
    clip[ 2 ].w =172 ;
    clip[ 2 ].h =356 ;
    
    clip[ 3 ].x = 499;
    clip[ 3 ].y =256 ;
    clip[ 3 ].w =172 ;
    clip[ 3 ].h =356 ;

     clip[ 4 ].x =664 ;
    clip[ 4 ].y =256 ;
    clip[ 4 ].w =172 ;
    clip[ 4 ].h =356 ;

    clip[ 5 ].x =829 ;
    clip[ 5 ].y =256 ;
    clip[ 5 ].w =172 ;
    clip[ 5 ].h =356 ;

    
}










