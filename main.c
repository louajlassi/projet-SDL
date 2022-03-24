#include<stdlib.h>
#include<stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "backg.h"

int main(){
Background b ;
SDL_Surface *screen ; 
SDL_Surface *back ; 


initBack(&b);

back = IMG_Load("backg.jpg");
afficherBack(b,screen);

}
