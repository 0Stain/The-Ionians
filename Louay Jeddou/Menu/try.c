#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
int main(void){
SDL_Surface *screen;
SDL_Surface *menu;
SDL_Surface *play,*play2,*setmenu,*credmenu,*window,*full,*back,*gamemap,*title;
SDL_Surface *load,*load2;
SDL_Surface *credits,*credits2;
SDL_Surface *settings,*settings2;
SDL_Surface *quit,*quit2;
SDL_Surface *key;
SDL_Rect positionecran;
SDL_Event event;
Mix_Music *music,*music1;
SDL_Surface *background;
SDL_Rect positionplay,positionbackground,positioncredits,positiontitle;
SDL_Rect positionsettings,positionwindow,positionfull,positionback,ptexte;
SDL_Rect positionquit;
SDL_Rect positionload;
char pause;int done=1,i=0,k=0,x=0,y=0;

SDL_Color couleurNoire={0,0,255};

//graphic
if(SDL_Init(SDL_INIT_VIDEO)!=0){
printf("Unable to initialize SDL:%s\n",SDL_GetError());
return 1;
}
TTF_Init();


//----------
screen = SDL_SetVideoMode(1800,1197,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
if(screen == NULL){
printf("Unable to set video mode: %s \n",SDL_GetError());
return 1;
}
//----------





//music
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
{printf("%s",Mix_GetError());
}



//graphic.mvt

background =IMG_Load("Background.png");
if(background == NULL)
{printf("can't load BMP:%s\n",SDL_GetError());
return 1;
}
//----------
title=IMG_Load("The Savior.png");
play= IMG_Load("PLAY.png");
load= IMG_Load("LOAD.png");
settings= IMG_Load("SETTINGS.png");
credits=IMG_Load("CREDITS.png");
quit= IMG_Load("QUIT.png");
if(menu == NULL){
printf("Can't load BMP:%s\n",SDL_GetError());
return 1;
}

//---------
positionecran.x=-60;
positionecran.y=-80;
positionecran.w=background->w;
positionecran.h=background->h;


//----------
positiontitle.x=685;
positiontitle.y=40;

positionplay.x=825;
positionplay.y=420;


positionload.x=825;
positionload.y=520;


positionsettings.x=825;
positionsettings.y=620;

positioncredits.x=825;
positioncredits.y=720;

positionquit.x=825;
positionquit.y=820;

 



SDL_BlitSurface(background,NULL,screen,&positionecran);
SDL_BlitSurface(title,NULL,screen,&positiontitle);
SDL_BlitSurface(play,NULL,screen,&positionplay);
SDL_BlitSurface(load,NULL,screen,&positionload);
SDL_BlitSurface(settings,NULL,screen,&positionsettings);
SDL_BlitSurface(credits,NULL,screen,&positioncredits);
SDL_BlitSurface(quit,NULL,screen,&positionquit);
SDL_Flip(screen);
music1 = Mix_LoadMUS("TimelyVictory.mp3");
Mix_PlayMusic(music1,-1);
while(done)
{
		SDL_PollEvent(&event);
		switch(event.type)
		{
			case SDL_QUIT:
			done=0;
			break;
			case SDL_KEYDOWN:
			switch(event.key.keysym.sym)
			{
								case SDLK_DOWN://Going Down with the arrow
								i++;
								if (i==6)
								{
									i=1;
								}
								if(i==1)
								{
									play2= IMG_Load("PLAY_Anime.png");
										   			music = Mix_LoadMUS("click_wheel.mp3");
													Mix_PlayMusic(music,1);
													
													SDL_BlitSurface(title,NULL,screen,&positiontitle);
										            SDL_BlitSurface(play2,NULL,screen,&positionplay);
										            SDL_BlitSurface(load,NULL,screen,&positionload);
										            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
										            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
										           SDL_BlitSurface(quit,NULL,screen,&positionquit);
										                    SDL_Flip(screen);
										                    k=1;SDL_Delay(200);

								}
								if (i==2)
								{
									load2= IMG_Load("LOAD_Anime.png");
																   		music = Mix_LoadMUS("click_wheel.mp3");
																		Mix_PlayMusic(music,1);
																		SDL_BlitSurface(title,NULL,screen,&positiontitle);
															            SDL_BlitSurface(play,NULL,screen,&positionplay);
															            SDL_BlitSurface(load2,NULL,screen,&positionload);
															            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
															            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
															           SDL_BlitSurface(quit,NULL,screen,&positionquit);

															           k=0;SDL_Flip(screen);SDL_Delay(200);
								}
								if (i==3)
								{

															  			 settings2= IMG_Load("SETTINGS_Anime.png");
																    music = Mix_LoadMUS("click_wheel.mp3");
																	Mix_PlayMusic(music,1);
																	SDL_BlitSurface(title,NULL,screen,&positiontitle);
																        SDL_BlitSurface(play,NULL,screen,&positionplay);
															            SDL_BlitSurface(load,NULL,screen,&positionload);
															            SDL_BlitSurface(settings2,NULL,screen,&positionsettings);
															            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
															           SDL_BlitSurface(quit,NULL,screen,&positionquit);
															k=2;	SDL_Flip(screen);SDL_Delay(200);
								}
								if (i==4)
								{
									credits2= IMG_Load("CREDITS_Anime.png");
															music = Mix_LoadMUS("click_wheel.mp3");
																								Mix_PlayMusic(music,1);
																											SDL_BlitSurface(title,NULL,screen,&positiontitle);
																		 SDL_BlitSurface(play,NULL,screen,&positionplay);
																		 SDL_BlitSurface(load,NULL,screen,&positionload);
																				 SDL_BlitSurface(settings,NULL,screen,&positionsettings);
																			 SDL_BlitSurface(credits2,NULL,screen,&positioncredits);
																			 SDL_BlitSurface(quit,NULL,screen,&positionquit);

																			 k=3;SDL_Flip(screen);SDL_Delay(200);
								}
								if (i==5)
								{
									quit2= IMG_Load("QUIT_Anime.png");
										   			music = Mix_LoadMUS("click_wheel.mp3");
													Mix_PlayMusic(music,1);
													SDL_BlitSurface(title,NULL,screen,&positiontitle);
										            SDL_BlitSurface(play,NULL,screen,&positionplay);
										            SDL_BlitSurface(load,NULL,screen,&positionload);
										            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
										            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
										           SDL_BlitSurface(quit2,NULL,screen,&positionquit);
										           k=4;SDL_Flip(screen);SDL_Delay(200);
										       }
										       ;
										       break;


								case SDLK_UP ://Going up with the arrow
								i--;
								if (i==0)
								{
									i=5;
								}
								if (i==6)
								{
									i=1;
								}
								if(i==1)
								{
									play2= IMG_Load("PLAY_Anime.png");
										   			music = Mix_LoadMUS("click_wheel.mp3");
													Mix_PlayMusic(music,1);
													SDL_BlitSurface(title,NULL,screen,&positiontitle);
										            SDL_BlitSurface(play2,NULL,screen,&positionplay);
										            SDL_BlitSurface(load,NULL,screen,&positionload);
										            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
										            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
										           SDL_BlitSurface(quit,NULL,screen,&positionquit);
										                   SDL_Flip(screen);
										                    k=1;SDL_Delay(200);
								}
								if (i==2)
								{
									load2= IMG_Load("LOAD_Anime.png");
																   		music = Mix_LoadMUS("click_wheel.mp3");
																		Mix_PlayMusic(music,1);
																		SDL_BlitSurface(title,NULL,screen,&positiontitle);
															            SDL_BlitSurface(play,NULL,screen,&positionplay);
															            SDL_BlitSurface(load2,NULL,screen,&positionload);
															            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
															            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
															           SDL_BlitSurface(quit,NULL,screen,&positionquit);

															           k=0;SDL_Flip(screen);SDL_Delay(200);
								}
								if (i==3)
								{

															  			 settings2= IMG_Load("SETTINGS_Anime.png");
																    music = Mix_LoadMUS("click_wheel.mp3");
																	Mix_PlayMusic(music,1);
																	SDL_BlitSurface(title,NULL,screen,&positiontitle);
																        SDL_BlitSurface(play,NULL,screen,&positionplay);
															            SDL_BlitSurface(load,NULL,screen,&positionload);
															            SDL_BlitSurface(settings2,NULL,screen,&positionsettings);
															            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
															           SDL_BlitSurface(quit,NULL,screen,&positionquit);
															k=2;	SDL_Flip(screen);SDL_Delay(200);
								}
								if (i==4)
								{
									credits2= IMG_Load("CREDITS_Anime.png");
															music = Mix_LoadMUS("click_wheel.mp3");
																								Mix_PlayMusic(music,1);
																											SDL_BlitSurface(title,NULL,screen,&positiontitle);
																		 SDL_BlitSurface(play,NULL,screen,&positionplay);
																		 SDL_BlitSurface(load,NULL,screen,&positionload);
																				 SDL_BlitSurface(settings,NULL,screen,&positionsettings);
																			 SDL_BlitSurface(credits2,NULL,screen,&positioncredits);
																			 SDL_BlitSurface(quit,NULL,screen,&positionquit);

																			 k=3;SDL_Flip(screen);SDL_Delay(200);
								}
								if (i==5)
								{
									quit2= IMG_Load("QUIT_Anime.png");
										   			music = Mix_LoadMUS("click_wheel.mp3");
													Mix_PlayMusic(music,1);
													SDL_BlitSurface(title,NULL,screen,&positiontitle);
										            SDL_BlitSurface(play,NULL,screen,&positionplay);
										            SDL_BlitSurface(load,NULL,screen,&positionload);
										            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
										            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
										           SDL_BlitSurface(quit2,NULL,screen,&positionquit);
										           k=4;SDL_Flip(screen);SDL_Delay(200);
										       }
										       ;
										       break;	


								case SDLK_RETURN:

								if (k==1)
								{
									gamemap=IMG_Load("Stage 1.png");
 									SDL_BlitSurface(gamemap,NULL,screen,&positionecran);
 									SDL_Flip(screen);
 									break;
								}	
								if (k==2)
								{
									setmenu=IMG_Load("Menu_Settings.png");
									SDL_BlitSurface(setmenu,NULL,screen,&positionecran);
									SDL_Flip(screen);
									break;
								}	
								if (k==3)
								{
									credmenu=IMG_Load("Menu_CREDITS.png");
									SDL_BlitSurface(credmenu,NULL,screen,&positionecran);
									SDL_Flip(screen);
									break;
								}   
								if (k==4)
								{
									return 0;
								}    ;
								break;

								case SDLK_ESCAPE:
								
					      	SDL_BlitSurface(title,NULL,screen,&positiontitle);
					      	SDL_BlitSurface(background,NULL,screen,&positionecran);
							SDL_BlitSurface(play,NULL,screen,&positionplay);
							SDL_BlitSurface(load,NULL,screen,&positionload);
							SDL_BlitSurface(settings,NULL,screen,&positionsettings);
							SDL_BlitSurface(credits,NULL,screen,&positioncredits);
							SDL_BlitSurface(quit,NULL,screen,&positionquit);
							SDL_Flip(screen);
					      	;
							break;
				}



				//mouse thing 				
				case SDL_MOUSEMOTION:
                                        x = event.motion.x;
                                        y = event.motion.y;
					if(x>=positionplay.x && x<=positionplay.x+positionplay.w && y>=positionplay.y && y<=positionplay.y+positionplay.h)

						{

play2= IMG_Load("PLAY_Anime.png");

	   SDL_BlitSurface(title,NULL,screen,&positiontitle);
            SDL_BlitSurface(play2,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);SDL_Flip(screen);
    

k=4;

						}
else if(x>=positionload.x && x<=positionload.x+positionload.w && y>=positionload.y && y<=positionload.y+positionload.h)

						{

load2= IMG_Load("LOAD_Anime.png");

	   SDL_BlitSurface(title,NULL,screen,&positiontitle);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load2,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
             SDL_BlitSurface(credits,NULL,screen,&positioncredits);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);SDL_Flip(screen);
      
k=1;
						}
else if(x>=positionsettings.x && x<=positionsettings.x+positionsettings.w && y>=positionsettings.y && y<=positionsettings.y+positionsettings.h)

						{

settings2= IMG_Load("SETTINGS_Anime.png");

	    SDL_BlitSurface(title,NULL,screen,&positiontitle);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings2,NULL,screen,&positionsettings);
             SDL_BlitSurface(credits,NULL,screen,&positioncredits);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);SDL_Flip(screen);
          
k=2;



						}



else if(x>=positioncredits.x && x<=positioncredits.x+positioncredits.w && y>=positioncredits.y && y<=positioncredits.y+positioncredits.h)

						{

credits2= IMG_Load("CREDITS_Anime.png");
   
SDL_BlitSurface(title,NULL,screen,&positiontitle);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
            SDL_BlitSurface(credits2,NULL,screen,&positioncredits);
           SDL_BlitSurface(quit,NULL,screen,&positionquit);SDL_Flip(screen);
           


k=3;




						}




else if(x>=positionquit.x && x<=positionquit.x+positionquit.w && y>=positionquit.y && y<=positionquit.y+positionquit.h)

						{

quit2= IMG_Load("QUIT_Anime.png");
   
SDL_BlitSurface(title,NULL,screen,&positiontitle);
            SDL_BlitSurface(play,NULL,screen,&positionplay);
            SDL_BlitSurface(load,NULL,screen,&positionload);
            SDL_BlitSurface(settings,NULL,screen,&positionsettings);
            SDL_BlitSurface(credits,NULL,screen,&positioncredits);
           SDL_BlitSurface(quit2,NULL,screen,&positionquit);SDL_Flip(screen);
           


k=4;

						};
						break;
						case SDL_MOUSEBUTTONDOWN :

  	 if( event.button.button == SDL_BUTTON_LEFT )
  	  	{ //Get the mouse offsets
						x = event.button.x; y = event.button.y; 
  		
  		 if(x>=positioncredits.x && x<=positioncredits.x+positioncredits.w && y>=positioncredits.y && y<=positioncredits.y+positioncredits.h)
  		{
  			credmenu=IMG_Load("Menu_CREDITS.png");
			SDL_BlitSurface(credmenu,NULL,screen,&positionecran);
			SDL_Flip(screen);
  		}
  		else if(x>=positionsettings.x && x<=positionsettings.x+positionsettings.w && y>=positionsettings.y && y<=positionsettings.y+positionsettings.h)
  		{
  			setmenu=IMG_Load("Menu_Settings.png");
			SDL_BlitSurface(setmenu,NULL,screen,&positionecran);
			SDL_Flip(screen);
  		}
  		else if(x>=positionplay.x && x<=positionplay.x+positionplay.w && y>=positionplay.y && y<=positionplay.y+positionplay.h)
  		{
  			gamemap=IMG_Load("Stage 1.png");
 			SDL_BlitSurface(gamemap,NULL,screen,&positionecran);
 			SDL_Flip(screen);
  		}
  		else if(x>=positionquit.x && x<=positionquit.x+positionquit.w && y>=positionquit.y && y<=positionquit.y+positionquit.h)
  		{
  			return 0;
  		}};
  		break;



	}

}



SDL_Flip(screen);
//freeallocation
SDL_FreeSurface(credits);
SDL_FreeSurface(credits2);
SDL_FreeSurface(play);
SDL_FreeSurface(window);
SDL_FreeSurface(full);
SDL_FreeSurface(back);
SDL_FreeSurface(setmenu);
SDL_FreeSurface(credmenu);
SDL_FreeSurface(load);
SDL_FreeSurface(settings);
SDL_FreeSurface(quit);
SDL_FreeSurface(play2);
SDL_FreeSurface(load2);
SDL_FreeSurface(settings2);
SDL_FreeSurface(quit2);
SDL_FreeSurface(setmenu);
SDL_FreeSurface(background);
Mix_FreeMusic(music);
Mix_FreeMusic(music1);
 
pause=getchar();
return 0;
}