#include <stdio.h>
#include "SDL/SDL.h"
#include"SDL/SDL_image.h"
#include <SDL/SDL_mixer.h>

int main (int argc, char *argv[])
{
SDL_Surface *screen= NULL ;
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

if (SDL_Init(SDL_INIT_VIDEO)!=0){
printf("unable to initialize SDL: %s \n ",SDL_GetError());
return 1;
}
screen=SDL_SetVideoMode(2000,500, 32,SDL_HWSURFACE | SDL_DOUBLEBUF);
if (screen==NULL){
printf("unabke to set video mode : %s \n",SDL_GetError());
return 1;
}
image =SDL_LoadBMP("stage1.bmp");
if(image==NULL){
printf("unable to load bitmap : %s \n",SDL_GetError());
return 1;
}
image2=IMG_Load("1.png");


if(image2==NULL){
printf("unable to load bitamp : %s \n ",SDL_GetError());
SDL_SetColorKey(image2, SDL_SRCCOLORKEY, SDL_MapRGB(image2->format,255,255,255));
return 1;
}
image3=IMG_Load("1.png");
  
if(image3==NULL){
printf("unable to load bitamp : %s \n ",SDL_GetError());
SDL_SetColorKey(image3, SDL_SRCCOLORKEY, SDL_MapRGB(image3->format,255,255,255));
return 1;
}
image4=IMG_Load("1.png");
  
if(image4==NULL){
printf("unable to load bitamp : %s \n ",SDL_GetError());
SDL_SetColorKey(image4, SDL_SRCCOLORKEY, SDL_MapRGB(image3->format,255,255,255));
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



 	SDL_BlitSurface(image, NULL , screen,   &positionecran);
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
