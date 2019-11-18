#include "NAE_Error_log.h"
#include "SDL.h"

int NAE_Init_Window() {
	if (SLD_Init(SDL_INIT_EVERYTHING) < 0) {
		NAE_Custom_Error("SDL_Init(SDL_INIT_EVERYTHING)");
		return -1;
	}
	else {
		return 0;
	}
}
