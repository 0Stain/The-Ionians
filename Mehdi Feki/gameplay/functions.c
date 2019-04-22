#include <stdio.h>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>
#include "header.h"

void initi(ennemi *es,char file_name[],int x, int y){
es->pos_e.x=x;
es->pos_e.y=y;
es->image=IMG_Load(file_name);

}





void afficher(ennemi*es,SDL_Surface *screen,SDL_Rect clip[] ,int frame){

SDL_BlitSurface(es->image,&clip[frame],screen,&es->pos_e);
SDL_Flip(screen);


}



void setclip(SDL_Rect* clip)
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
void setclip2(SDL_Rect* clip)
{
    //Clip the sprites
    clip[ 0 ].x =1859 ;
    clip[ 0 ].y =256 ;
    clip[ 0 ].w =172 ;
    clip[ 0 ].h =356 ;

    clip[ 1 ].x = 1690;
    clip[ 1 ].y =256  ;
    clip[ 1 ].w =172 ;
    clip[ 1 ].h =356 ;

    clip[ 2 ].x = 1521;
    clip[ 2 ].y =256 ;
    clip[ 2 ].w =172 ;
    clip[ 2 ].h =356 ;

    clip[ 3 ].x = 1352;
    clip[ 3 ].y =256 ;
    clip[ 3 ].w =172 ;
    clip[ 3 ].h =356 ;

    clip[ 4 ].x =1183 ;
    clip[ 4 ].y =256 ;
    clip[ 4 ].w =172 ;
    clip[ 4 ].h =356 ;

    clip[ 5 ].x =1014 ;
    clip[ 5 ].y =256 ;
    clip[ 5 ].w =172 ;
    clip[ 5 ].h =356 ;


}


int coin (SDL_Rect*screen,SDL_Rect*sprite)
{

SDL_Surface *image=  NULL ;
SDL_Surface *image2= NULL;
SDL_Surface *image3= NULL;
SDL_Surface *image4= NULL;

SDL_Event event;
Mix_Music *mix;


int done =1;
SDL_Rect positionecran,positionecran2,positionecran3,positionecran4;
int back_x=0;
int back_y=0;
int per_x=832;
int per_y=320;
int diam_x=946;
int diam_y=320;
int fire_x=500;
int fire_y=329;	
char pause ;
//if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS, 1024)==-1)
//	{
//		printf("%s",Mix_GetError());
	
//mix=Mix_LoadMUS("menu.mp3");
image=IMG_Load("c2.jpg");
if(image==NULL){
printf("unable to load bitamp : %s \n ",SDL_GetError());
SDL_SetColorKey(image, SDL_SRCCOLORKEY, SDL_MapRGB(image->format,255,255,255));
return 1;
}
image2=IMG_Load("c3.jpg");
  
if(image2==NULL){
printf("unable to load bitamp : %s \n ",SDL_GetError());
SDL_SetColorKey(image2, SDL_SRCCOLORKEY, SDL_MapRGB(image2->format,255,255,255));
return 1;
}
image3=IMG_Load("c1.jpg");
  
if(image3==NULL){
printf("unable to load bitamp : %s \n ",SDL_GetError());
SDL_SetColorKey(image3, SDL_SRCCOLORKEY, SDL_MapRGB(image3->format,255,255,255));
return 1;
}


while (done)
{
	positionecran.x =back_x;
	positionecran.y =back_y;
	positionecran2.x =per_x;
	positionecran2.y =per_y ;
	positionecran3.x=diam_x ;
        positionecran3.y=diam_y ;  
        positionecran4.x=fire_x ;
        positionecran4.y=fire_y ;



 	SDL_BlitSurface(sprite, NULL , screen,   &positionecran);
	SDL_BlitSurface(image2, NULL , screen , &positionecran2);
        SDL_BlitSurface(image3, NULL , screen , &positionecran3);
        SDL_BlitSurface(image4, NULL , screen , &positionecran4);


SDL_Flip(screen);
}
SDL_FreeSurface(image);
SDL_FreeSurface(image2);
SDL_FreeSurface(image3);
SDL_FreeSurface(image4);

//Mix_FreeMusic(mix);


return 0;
}






