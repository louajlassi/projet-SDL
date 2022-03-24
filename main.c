#include<stdlib.h>
#include<stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

#include "backg.h"

int main(){
Background b ;
SDL_Surface *screen ; 
SDL_Surface *back ; 

SDL_Init(SDL_INIT_EVERYTHING);

screen=SDL_SetVideoMode (1000,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF);

initBack(&b);

back = IMG_Load("backg.jpg");
SDL_BlitSurface(back,NULL,screen,NULL);
afficherBack(b,screen);

}
