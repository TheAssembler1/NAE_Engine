#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>

//controls the input on the window
void NAE_Window_Input(SDL_Event sdl_event, bool* gameover) {
	while (SDL_PollEvent(&sdl_event)) {
		switch (sdl_event.type) {
			case SDL_QUIT:
				*gameover = true;
		}
	}
}