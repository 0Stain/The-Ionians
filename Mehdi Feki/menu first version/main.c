#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
int menu1{
SDL_Surface *screen;
SDL_Surface *menu;
SDL_Surface *play,*play2,*setmenu,*window,*full,*back;
SDL_Surface *load,*load2;
SDL_Surface *settings,*settings2;
SDL_Surface *quit,*quit2;
SDL_Surface *key;
SDL_Rect positionecran;

Mix_Music *music;
SDL_Surface *background;
SDL_Rect positionplay;
SDL_Rect positionsettings,positionwindow,positionfull,positionback;
SDL_Rect positionquit;
SDL_Rect positionload;
char pause;int done=1,i=0,k=0,x=0,y=0;


//graphic
if(SDL_Init(SDL_INIT_VIDEO)!=0){
printf("Unable to initialize SDL:%s\n",SDL_GetError());
return 1;
}
//----------

if(screen == NULL){
printf("Unable to set video mode: %s \n",SDL_GetError());
return 1;
}
//----------





//music
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{printf("%s",Mix_GetError());
}

music = Mix_LoadMUS("music.mp3");
Mix_PlayMusic(music,-1);

//graphic.mvt

background =IMG_Load("background.png");
if(background == NULL)
{printf("can't load BMP:%s\n",SDL_GetError());
return 1;
}
//----------
play= IMG_Load("PLAY.png");
load= IMG_Load("LOAD.png");
settings= IMG_Load("SETTINGS.png");
quit= IMG_Load("QUIT.png");
if(menu == NULL){
printf("Can't load BMP:%s\n",SDL_GetError());
return 1;
}

//---------
positionecran.x=0;
positionecran.y=0;
positionecran.w=background->w;
positionecran.h=background->h;


//----------
positionplay.x=850;
positionplay.y=600;


positionload.x=850;
positionload.y=710;


positionsettings.x=850;
positionsettings.y=813;


positionquit.x=850;
positionquit.y=920;
SDL_BlitSurface(background,NULL,screen,&positionecran);
SDL_BlitSurface(play,NULL,screen,&positionplay);
SDL_BlitSurface(load,NULL,screen,&positionload);
SDL_BlitSurface(settings,NULL,screen,&positionsettings);
SDL_BlitSurface(quit,NULL,screen,&positionquit);
SDL_Flip(screen);
while(done)
{
SDL_Flip(screen);
while (SDL_PollEvent(&event)){
switch(event.type){
case SDL_KEYDOWN:
     i=i+1;
if (i==5)
{
i=1;
}
switch (i)
{




  case 1:
{
    if(event.key.keysym.sym == SDLK_DOWN){
   play2= IMG_Load("PLAY_Anime.png");

	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play2,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=0;

}
 if(event.key.keysym.sym == SDLK_UP){

   quit2= IMG_Load("QUIT_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit2,NULL,screen,&positionquit);
k=0;

}

break;
}
  case 2:
{
    if(event.key.keysym.sym == SDLK_DOWN){

   load2= IMG_Load("LOAD_Anime.png");

	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load2,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=0;

}
if(event.key.keysym.sym == SDLK_UP){

   settings2= IMG_Load("SETTINGS_Anime.png");

	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings2,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=1;
}

break;
}
  case 3:
{
    if(event.key.keysym.sym == SDLK_DOWN){

   settings2= IMG_Load("SETTINGS_Anime.png");

	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings2,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=1;
}
if(event.key.keysym.sym == SDLK_UP){

   load2= IMG_Load("LOAD_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load2,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
          SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=0;

}

break;
}
  case 4:
{
    if(event.key.keysym.sym == SDLK_DOWN){

   quit2= IMG_Load("QUIT_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit2,NULL,screen,&positionquit);
k=0;

}

  if(event.key.keysym.sym == SDLK_UP){
   play2= IMG_Load("PLAY_Anime.png");

	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play2,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=0;

}
break;
}

}
      break;
case SDL_MOUSEMOTION:
                                        x = event.motion.x;
                                        y = event.motion.y;
					if(x>=positionplay.x && x<=positionplay.x+positionplay.w && y>=positionplay.y && y<=positionplay.y+positionplay.h)

						{

play2= IMG_Load("PLAY_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play2,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=0;


						}
if(x>=positionload.x && x<=positionload.x+positionload.w && y>=positionload.y && y<=positionload.y+positionload.h)

						{

load2= IMG_Load("LOAD_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load2,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=0;


						}
if(x>=positionsettings.x && x<=positionsettings.x+positionsettings.w && y>=positionsettings.y && y<=positionsettings.y+positionsettings.h)

						{

settings2= IMG_Load("SETTINGS_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings2,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);
k=1;



						}
if(x>=positionquit.x && x<=positionquit.x+positionquit.w && y>=positionquit.y && y<=positionquit.y+positionquit.h)

						{

quit2= IMG_Load("QUIT_Anime.png");
	    SDL_BlitSurface(background,NULL,screen,&positionecran);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
           SDL_BlitSurface(quit2,NULL,screen,&positionquit);

k=0;

						}
						break;
 case SDL_QUIT:
        return 0;
      break;


}
//if ((k==1)&&(event.key.keysym.sym == SDLK_RETURN))
//{

//setmenu=IMG_Load("Menu_Settings.png");
//SDL_BlitSurface(setmenu,NULL,screen,&positionecran);
//if (event.key.keysym.sym == SDLK_ESCAPE)
//{
//k=0;
//}
// }

}
}



//freeallocation
SDL_FreeSurface(play);
SDL_FreeSurface(window);
SDL_FreeSurface(full);
SDL_FreeSurface(back);
SDL_FreeSurface(setmenu);
SDL_FreeSurface(load);
SDL_FreeSurface(settings);
SDL_FreeSurface(quit);
SDL_FreeSurface(play2);
SDL_FreeSurface(load2);
SDL_FreeSurface(settings2);
SDL_FreeSurface(quit2);
SDL_FreeSurface(setmenu);

Mix_FreeMusic(music);
pause=getchar();
return k;
}

int menu2{
SDL_Surface *screen;
SDL_Rect positionecran;
SDL_Surface *background;
SDL_Event event;
int k=0;

screen = SDL_SetVideoMode(1920,1080,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
positionecran.x=0;
positionecran.y=0;
positionecran.w=background->w;
positionecran.h=background->h;
background=IMG_Load("Menu_Settings.png");
SDL_BlitSurface(background,NULL,screen,&positionecran);
while (SDL_PollEvent(&event)){
switch(event.type){
case SDL_KEYDOWN:
{
switch (event.key.keysym.sym)

case SDLK_ESCAPE:
{
k=0;
break;
}
}
case SDL_QUIT:
        return 0;
      break;
break;
}
}
SDL_FreeSurface(background);
return k;
}

