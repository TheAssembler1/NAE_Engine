#include "Garbage.h"

void Garbage_Dump(SDL_Window* window, SDL_Renderer* render){
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(render);
	SDL_Quit();
	String_Log("DUMPING MEMORY", 0, 0);
}
