#include <SDL.h>

//calculates delta time
double NAE_Get_Delta_Time(Uint64* now, Uint64* last, double delta_time) {
	*last = *now;
	*now = SDL_GetPerformanceCounter();
	return (double)((now - last) * 1000 / (double)SDL_GetPerformanceFrequency());
}