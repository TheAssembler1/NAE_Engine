#include "Window.h"

SDL_Window* Window_Init(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        printf("ERROR::SDL INIT ERROR::%s", SDL_GetError());
        exit(0);
    }
    else{
        SDL_Window* window = SDL_CreateWindow("TESTING", WINDOW_X, WINDOW_Y, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL){
            printf("ERROR:WINDOW NULL::%s", SDL_GetError());
            SDL_Quit();
            exit(0);
        }
        return window;
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
    return render;
}   