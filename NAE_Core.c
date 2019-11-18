#include <stdbool.h>
#include "SDL.h"
#include  "NAE_Init.h"

int main(int argc, char* argv[]) {

	//making the main window
	SDL_Window* NAE_Window= NAE_Init_Window();

	//making the main renderer
	SDL_Renderer* NAE_Renderer = NAE_Init_Renderer(NAE_Window);

	//game loop boolean
	bool NAE_GameOver = false;

	/*THIS IS THE MAIN LOOP OF THE GAME!!!*/
	while (!NAE_GameOver) {

		//get delta time

		//poll input

		//update positions of object

		//clear screen

		//render

	}

	return 0;
}