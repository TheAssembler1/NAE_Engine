#include <stdio.h>
#include <stdbool.h>
#include <SDL2/SDL.h>
#include "Core/Window/Window.h"
#include "Core/Timer/Timer.h"

int main(int argc, char* argv[]){

    bool running = true;
    SDL_Event event;

    while(running){
        Window_Input(&running, &event);
    }

    return 0;
}