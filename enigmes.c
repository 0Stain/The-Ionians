#include <stdio.h>
#include <stdlib.h>
#include "SDL/SDL.h"
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "enigmes.h"

void init_enigmes(enigme *eni)
{
    eni->pose.x=500;
    eni->pose.y=260;
    eni->E1=SDL_LoadBMP("enigme01.bmp");
    eni->E2= SDL_LoadBMP("enigme02.bmp");
    eni->E3= SDL_LoadBMP("enigme03.bmp");
    eni->E4= SDL_LoadBMP("enigme04.bmp");
    eni->E5=SDL_LoadBMP("enigme05.bmp");
}
void generation_auto(enigme *eni, SDL_Surface *ecran,int *chamb)
{
    srand(time(NULL));
    *chamb=rand()%5;
    switch (*chamb)
    {
    case 0 :
    {
        SDL_BlitSurface(eni->E1, NULL, ecran,&eni->pose);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 1 :
    {
        SDL_BlitSurface(eni->E2, NULL, ecran, &eni->pose);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 2 :
    {
        SDL_BlitSurface(eni->E3, NULL, ecran, &eni->pose);
        SDL_Flip(ecran);
        SDL_Delay(500);

        break;
    }
    case 3 :
    {
        SDL_BlitSurface(eni->E4, NULL,ecran, &eni->pose);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }

    case 4 :
    {
        SDL_BlitSurface(eni->E5, NULL, ecran, &eni->pose);
        SDL_Flip(ecran);
        SDL_Delay(500);
        break;
    }
    }
}





void init_resolution(enigme *eni)

{
    eni->key=SDL_LoadBMP("key.bmp");
    eni->try1=SDL_LoadBMP("try1.bmp");
    eni->try2=SDL_LoadBMP("try2.bmp");
}


void resolution_enigmes(enigme *eni, SDL_Surface *ecran,int *chamb,SDL_Event event )
{
    int continuer=1;
    while (continuer)
    {
        SDL_WaitEvent(&event);
        switch (*chamb)
        {
        case 0:
        
            switch(event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_1:
                    {
                        SDL_WaitEvent(&event);
                        if(event.key.keysym.sym==SDLK_5)
                        {
                            SDL_BlitSurface(eni->key,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                        }
                        else 
                        {
                            SDL_BlitSurface(eni->try1,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                        }
                    }
                    break;
                    //case !SDLK_1
                }
            break;

            }
        break;
        case 1 :
        switch(event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_1:
                    {
                        SDL_WaitEvent(&event);
                        if(event.key.keysym.sym==SDLK_5)
                        {
                            SDL_BlitSurface(eni->key,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                        }
                        else 
                        {
                            SDL_BlitSurface(eni->try1,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                        }
                    }
                    break;
                    //case !SDLK_1
                }
            break;

            }
        break;
        case 2:
        switch(event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_b:
                            SDL_BlitSurface(eni->key,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                    break;
                    default:
                            SDL_BlitSurface(eni->try1,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                    break;    
                }
            break;

            }
        break;
        case 3:
        switch(event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_c:
                            SDL_BlitSurface(eni->key,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                    break;
                    default:
                            SDL_BlitSurface(eni->try1,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                    break;    
                }
            break;

            }
        break;
        case 4:
        switch(event.type)
            {
            case SDL_KEYDOWN:
                switch (event.key.keysym.sym)
                {
                    case SDLK_6:
                            SDL_BlitSurface(eni->key,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                    break;
                    default:
                            SDL_BlitSurface(eni->try1,NULL,ecran,&eni->pose);
                            SDL_Flip(ecran);
                            SDL_Delay(1000);
                    break;    
                }
            break;

            }
        break;

        }
    }
}
int main(int argc, char *argv[])
{
    SDL_Surface *ecran = NULL, *image = NULL;
    SDL_Event event;
    enigme eni;
    SDL_Rect posbg;
    Mix_Music *music;
    int chamb;
    int done=1;

    posbg.x = 0;
    posbg.y = 0;

    SDL_Init(SDL_INIT_VIDEO);
	init_enigmes(&eni);
    ecran = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);
    SDL_WM_SetCaption("background+enigme", NULL);

    Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS, 1024);
    music = Mix_LoadMUS("soundtrack.mp3");
    Mix_VolumeMusic(100);
    Mix_PlayMusic(music,-1);

    
    image = SDL_LoadBMP("background.bmp");
    
    while (done)
    {
        SDL_BlitSurface(image, NULL, ecran, &posbg);

        SDL_Flip(ecran);
        SDL_PollEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT:
            done= 0;
            break;
        case SDL_KEYDOWN:
            switch (event.key.keysym.sym)
            {
            case SDLK_LEFT:
                generation_auto(&eni,ecran,&chamb);
                SDL_Flip(ecran);
            break;
            }
            break;
        }
    resolution_enigmes(&eni,ecran,&chamb,event);    
    }

    Mix_FreeMusic(music);
    SDL_FreeSurface(ecran);
    SDL_FreeSurface(image);
    SDL_Quit();

    return EXIT_SUCCESS;
}
