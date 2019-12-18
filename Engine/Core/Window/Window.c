#include "Window.h"

SDL_Window* Window_Init(){
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0){
        String_Log("FAILED TO INIT SDL", SDL_GetError(), 2);
        exit(0);
    }
    else{
        SDL_Window* window = SDL_CreateWindow("TESTING", WINDOW_X, WINDOW_Y, WINDOW_WIDTH, WINDOW_HEIGHT, SDL_WINDOW_SHOWN);
        if(window == NULL){
            String_Log("WINDOW NULL", SDL_GetError(), 2);
            SDL_Quit();
            exit(0);
        }
        return window;
    }
}

SDL_Renderer* Render_Init(SDL_Window* window){
    SDL_Renderer* render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    if(render == NULL){
        String_Log("RENDER NULL", SDL_GetError(), 2);
        SDL_DestroyWindow(window);
        SDL_Quit();
        exit(0);
    }
    return render;
}   