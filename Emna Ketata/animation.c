#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <string.h>

void animation(SDL_Surface *ecran)
{
SDL_Surface *img;
SDL_Rect pos; pos.x=0;pos.y=0;
char chaine[200];

int i=0;
int g=1;
Mix_Music *musique;
char nom[100],nn[100];
SDL_Event event;
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
				musique = Mix_LoadMUS("./animation/son.mp3");
			Mix_PlayMusic(musique, -1);
			Mix_VolumeMusic(MIX_MAX_VOLUME);

while(g==1)
{

	strcpy(nom,"./animation/a0000");
				if(i>9){strcpy(nom,"./animation/a000");}
				if(i>99){strcpy(nom,"./animation/a00");}
			sprintf(nn,"%d",i);
			strcat(nom,nn);
			strcat(nom,".jpg");
			img= IMG_Load(nom);
			SDL_BlitSurface(img,NULL,ecran,&pos);
			SDL_Flip(ecran);
			SDL_FreeSurface(img);
			i++;
while(SDL_PollEvent(&event)){

	switch(event.type)
		{		
				case SDL_KEYDOWN:
		switch(event.key.keysym.sym)
			{case SDLK_RETURN:
				g=0;
				break;
				case SDLK_BACKSPACE:
				g=0;
				break;
			}
			break;}

}
if(i==115){g=0;}
}

Mix_CloseAudio();
Mix_FreeMusic(musique);
}




void load(SDL_Surface *ecran)
{ 
TTF_Init();
TTF_Font *police = NULL;
SDL_Surface *img;
SDL_Color blanc={250,250,250};
 police = TTF_OpenFont("./animation/angelina.TTF", 80); 
SDL_Surface *texte=NULL;
SDL_Rect postexte;postexte.x=400;postexte.y=400;
texte = TTF_RenderText_Blended(police, "l", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "lo", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loa", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(500);
texte = TTF_RenderText_Blended(police, "load", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loadi", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(800);
texte = TTF_RenderText_Blended(police, "loadin", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loading", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loading.", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
			texte = TTF_RenderText_Blended(police, "loading..", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
			texte = TTF_RenderText_Blended(police, "loading...", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
	TTF_CloseFont(police);
SDL_FreeSurface(texte);
TTF_Quit();


}


void animation2(SDL_Surface *ecran)
{
SDL_Surface *img;
SDL_Rect pos; pos.x=0;pos.y=0;
char chaine[200];

int i=0;
int g=1;
Mix_Music *musique;
char nom[100],nn[100];
SDL_Event event;
Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, MIX_DEFAULT_CHANNELS, 1024);
				musique = Mix_LoadMUS("./animation1/son2.mp3");
			Mix_PlayMusic(musique, -1);
			Mix_VolumeMusic(MIX_MAX_VOLUME);

while(g==1)
{

	strcpy(nom,"./animation1/a0000");
				if(i>9){strcpy(nom,"./animation1/a000");}
				if(i>99){strcpy(nom,"./animation1/a00");}


			sprintf(nn,"%d",i);
			strcat(nom,nn);
			strcat(nom,".jpg");
			img= IMG_Load(nom);
			SDL_BlitSurface(img,NULL,ecran,&pos);
			SDL_Flip(ecran);
			SDL_FreeSurface(img);
			i++;
while(SDL_PollEvent(&event)){

	switch(event.type)
		{		
				case SDL_KEYDOWN:
		switch(event.key.keysym.sym)
			{case SDLK_RETURN:
				g=0;
				break;
				case SDLK_BACKSPACE:
				g=0;
				break;
			}
			break;}

}
if(i==410){g=0;}
}

TTF_Init();
TTF_Font *police = NULL;

SDL_Color blanc={250,250,250};
 police = TTF_OpenFont("./animation/angelina.TTF", 80); 
SDL_Surface *texte=NULL;
SDL_Rect postexte;postexte.x=400;postexte.y=400;
texte = TTF_RenderText_Blended(police, "l", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "lo", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loa", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(500);
texte = TTF_RenderText_Blended(police, "load", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loadi", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(800);
texte = TTF_RenderText_Blended(police, "loadin", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loading", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
texte = TTF_RenderText_Blended(police, "loading.", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
			texte = TTF_RenderText_Blended(police, "loading..", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
			texte = TTF_RenderText_Blended(police, "loading...", blanc);
			SDL_BlitSurface(texte,NULL,ecran,&postexte);
			SDL_Flip(ecran);SDL_Delay(700);
	TTF_CloseFont(police);
SDL_FreeSurface(texte);
TTF_Quit();

Mix_CloseAudio();
Mix_FreeMusic(musique);
}












