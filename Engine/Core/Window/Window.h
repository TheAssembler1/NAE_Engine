#ifndef WINDOW_H
#define WINDOW_H
#include <SDL2/SDL.h>

SDL_Window* Window_Init();

SDL_Renderer* Render_Init(SDL_Window* window);

#endif