#include "Window.h"

SDL_Window* Window_Init(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        printf("ERROR::SDL INIT ERROR::%s", SDL_GetError());
        exit(0);
    }
    else{
        SDL_Window* window = SDL_CreateWindow("TESTING", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 500, 500, SDL_WINDOW_SHOWN);
        if(window == NULL){
            printf("ERROR:WINDOW NULL::%s", SDL_GetError());
            SDL_Quit();
            exit(0);
        }
        else{
            return window;
        }
    }
}

SDL_Renderer* Render_Init(SDL_Window* window){
    SDL_Renderer* render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(render == NULL){
        printf("ERROR:RENDER NULL::%s", SDL_GetError());
        SDL_DestroyWindow(window);
        SDL_Quit();
        exit(0);
    }
    else{
        return render;
    }
}   