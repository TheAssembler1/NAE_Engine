#include <stdbool.h>
#include <SDL.h>
#include "../../Header Files/NAE_Error_log.h"
#include "../../Header Files/NAE_Init.h"
#include "../User/Main.c"


int main(int argc, char* argv[]) {

	//making the main window
	SDL_Window* NAE_Window= NAE_Init_Window();

	//making the main renderer
	SDL_Renderer* NAE_Renderer = NAE_Init_Renderer(NAE_Window);

	//game loop boolean
	bool NAE_GameOver = false;

	//event structure for input
	SDL_Event NAE_EventStructure;

	/*THIS IS THE MAIN LOOP OF THE GAME!!!*/
	while (!NAE_GameOver) {

		//get delta time

		//poll input
		while (SDL_PollEvent(&NAE_EventStructure)) {

			//window input
			NAE_Window_Input(NAE_EventStructure, &NAE_GameOver);

			//keyboard input
			NAE_KeyBoard_Input(NAE_EventStructure);

			//mouse input

		}

		//update positions of object

		//clear screen
		SDL_RenderClear(NAE_Renderer);

		//draw the objects in queue

		//render
		SDL_RenderPresent(NAE_Renderer);

	}

	SDL_DestroyRenderer(NAE_Renderer);
	SDL_DestroyWindow(NAE_Window);
	SDL_Quit();
	return 0;
}