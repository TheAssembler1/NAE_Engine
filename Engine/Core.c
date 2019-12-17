#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "Core/Window/Window.h"
#include "Core/Timer/Timer.h"

int main(int argc, char* argv[]){

    bool running = true;
    SDL_Event event;
    SDL_Window* window = Window_Init();
    SDL_Renderer* render = Render_Init(window);

    while(!running){
        //FIXME::make window input func for all input
        //Window_Input(&running, &event);
    }

    //FIXME::make garbage dump func for now we hardcode freeing mem
    //Garbage_Dump();
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(render);
    SDL_Quit();
    return 0;
}