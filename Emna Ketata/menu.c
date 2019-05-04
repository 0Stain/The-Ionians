#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "options.h"
#include <string.h>
void blint(int actualbutton,SDL_Surface *ecran);

int menu(SDL_Surface *ecran)
{
	
ecran=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);
// partie declaration
SDL_Surface *menu,*titre=NULL,*texte=NULL,*text;
SDL_Surface *op,*vol2,*vol;
SDL_Rect pos,posvol,posvolicon,postexte2,posvolum,postexte;
pos.x=0;pos.y=0;
posvolum.x=200;posvolum.y=250;
posvol.x=0;posvol.y=200;
posvolicon.x=200;posvolicon.y=200;
postexte2.x=50;postexte2.y=450;    
postexte.x=500;postexte.y=500;
char chaine[20];
int cont=1,c=1,actualbutton=1,x,y,i=0,j=5;
SDL_Event event;
Mix_Music *musique;
char nom[30],no[20];
TTF_Font *police = NULL;
SDL_Color couleurNoire={0, 0, 0};
SDL_Color blanc={250,250,250};

/*********************************************************/




//intialisation
SDL_Init(SDL_INIT_VIDEO);TTF_Init();
ecran=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);

police = TTF_OpenFont("./menu/angelina.TTF", 80);  //init police

//musique et mouse effect :declaration et affectation
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
musique = Mix_LoadMUS("./menu/tt.mp3");
Mix_PlayMusic(musique, -1);
	Mix_AllocateChannels(10);
	Mix_Chunk *mouseEffect=Mix_LoadWAV("./menu/button16.wav");
	 Mix_VolumeChunk(mouseEffect,100);
Mix_VolumeMusic(MIX_MAX_VOLUME);


//les boutons
SDL_Surface *play_image,*options_image,*cred_image,*eq,*quit_image;
SDL_Rect posplay1,posoptions1,poscred,poscred2,posquit1,posquit2;

posplay1.x=60;posplay1.y=80;
posoptions1.x=60;posoptions1.y=230 ;
poscred.x=140;poscred.y=150 ;
poscred2.x=0;poscred2.y=0 ;

posquit1.x=60 ;posquit1.y=380 ;

play_image=IMG_Load("./menu/play.png");
options_image=IMG_Load("./menu/settings.png");
cred_image=IMG_Load("./menu/credi.png");
quit_image=IMG_Load("./menu/quit.png");



op= IMG_Load("./menu/back.png");
vol= IMG_Load("./menu/vol3.PNG");
vol2= IMG_Load("./menu/VOL2.png");
eq= IMG_Load("./menu/eq.png");

posvol.x=30;posvol.y=200;
posquit2.x=140;posquit2.y=320;
posvolicon.x=30;posvolicon.y=120;
postexte.x=200;postexte.y=0;
texte = TTF_RenderText_Blended(police, "THE SAVIOR", blanc);



while(cont)
{

 switch(c)
{case 1:

SDL_BlitSurface(op,NULL,ecran,&pos);			
SDL_BlitSurface(play_image,NULL,ecran,&posplay1);

SDL_BlitSurface(options_image,NULL,ecran,&posoptions1);
SDL_BlitSurface(quit_image,NULL,ecran,&posquit1);
//blint(actualbutton,ecran);


SDL_Flip(ecran);
i++;
while(SDL_PollEvent(&event)){


switch(event.type)

{
case SDL_QUIT:
cont=0;
break;

case SDL_KEYDOWN:

switch(event.key.keysym.sym)
{
case SDLK_p:

if(Mix_PausedMusic() == 1)
{ Mix_ResumeMusic(); }
else{Mix_PauseMusic();}

break;

case SDLK_RETURN:
if(actualbutton==1){c=3;}
if(actualbutton==2){c=2;}
if(actualbutton==3){cont=0;}
break;

case SDLK_BACKSPACE:
if((c==2)||(c==3)){c=1;}
break;

break;

}
case SDL_MOUSEMOTION:
SDL_GetMouseState(&x,&y);
if((x>65 )&&(x<300 )&&(y<170)&&(y>80 ))
{
if(actualbutton==1){}
else{actualbutton=1;Mix_PlayChannel(-1,mouseEffect,0);}
}



if((x>65 )&&(x<300 )&&(y <270)&&(y>180 ))
{
if(actualbutton==2){}
else{actualbutton=2;Mix_PlayChannel(-1,mouseEffect,0);}
}



if((x>65 )&&(x<300)&&(y <370)&&(y>280 ))
{
if(actualbutton==3){}
else{actualbutton=3;Mix_PlayChannel(-1,mouseEffect,0);}
}



if((x>65 )&&(x<300)&&(y <470)&&(y>380 ))
if(actualbutton==4){}
else{actualbutton=4;Mix_PlayChannel(-1,mouseEffect,0);}
				

	break;

case SDL_MOUSEBUTTONUP:
if((x>65 )&&(x<300 )&&(y<170)&&(y>80 )){c=3;}
if((x>65 )&&(x<300 )&&(y<330)&&(y>230 )){c=2;}
if((x>65 )&&(x<300)&&(y <490)&&(y>380 )){cont=0;}
break;

}


} // switch

SDL_BlitSurface(texte,NULL,ecran,&postexte);
SDL_Flip(ecran);
break;


case 2:

SDL_BlitSurface(op,NULL,ecran,&pos);
SDL_BlitSurface(vol2,NULL,ecran,&posvol);
SDL_BlitSurface(vol,NULL,ecran,&posvolicon);

SDL_BlitSurface(quit_image,NULL,ecran,&posquit2);
SDL_Flip(ecran);
while(SDL_PollEvent(&event)){

switch(event.type)
{
case SDL_QUIT:
cont=0;
break;

case SDL_KEYDOWN:

switch(event.key.keysym.sym)
{
case SDLK_p:

if(Mix_PausedMusic() == 1)
{ Mix_ResumeMusic(); }
else{Mix_PauseMusic();}

break;

}
case SDL_MOUSEMOTION:
SDL_GetMouseState(&x,&y);
if((x>30 )&&(x<70 )&&(y<150)&&(y>120 ))
{
if(actualbutton==1){}
else{actualbutton=1;Mix_PlayChannel(-1,mouseEffect,0);}
}

case SDL_MOUSEBUTTONUP:
if((x>30 )&&(x<70 )&&(y<150)&&(y>120 )){

if(Mix_PausedMusic() == 1)
{ Mix_ResumeMusic(); }

}
if((x>30 )&&(x<70 )&&(y<220)&&(y>200)){

if(Mix_PausedMusic() == 0)
{ Mix_PauseMusic();}

}

if((x>140 )&&(x<300 )&&(y<450)&&(y>350)){

c=1;

}




break;
}

}
}



}














Mix_FreeMusic(musique);
TTF_CloseFont(police);
SDL_FreeSurface(texte);
TTF_Quit();
SDL_FreeSurface(titre);

SDL_FreeSurface(play_image);
SDL_FreeSurface(options_image);
SDL_FreeSurface(quit_image);
SDL_FreeSurface(ecran);
Mix_CloseAudio();
SDL_FreeSurface(op);

SDL_FreeSurface(vol);

SDL_FreeSurface(vol2);
SDL_FreeSurface(text);






return 0;


}











