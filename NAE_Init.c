#include "NAE_Error_log.h"
#include "SDL.h"

/*function creates the main window of the engine*/
SDL_Window* NAE_Init_Window() {
	if (SLD_Init(SDL_INIT_EVERYTHING) < 0) {
		NAE_Custom_Error("SDL_Init(SDL_INIT_EVERYTHING)");
	}
	else {
		SDL_Window* NAE_Window = SDL_CreateWindow("NAE_Engine", 500, 500, 500, 500, NULL);
		if (NAE_Window == NULL) {
			NAE_Custom_Error("NAE_Window == NULL");
		}
		else {
			return NAE_Window;
		}
	}
}

/*function creates the main renderer of the engine*/
SDL_Renderer* NAE_Init_Renderer(SDL_Window* window) {
	SDL_Renderer* NAE_Renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (NAE_Renderer == NULL) {
		NAE_Custom_Error("NAE_Renderer == NULL");
	}
	else {
		return NAE_Renderer;
	}
}
