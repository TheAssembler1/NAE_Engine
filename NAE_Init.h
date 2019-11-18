#ifndef NAE_INIT
#define NAE_INIT
#include "SDL.h"

/*function creates the main window of the engine*/
extern SDL_Window* NAE_Init_Window();

/*function creates the main renderer of the engine*/
extern SDL_Renderer* NAE_Init_Renderer(SDL_Window* window);

#endif