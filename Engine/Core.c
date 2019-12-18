#include <stdbool.h>
#include <SDL2/SDL.h>
#include "Core/Window/Window.h"
#include "Core/Timer/Timer.h"
#include "Core/Garbage/Garbage.h"
#include "Core/String_Log/String_Log.h"

int main(int argc, char* argv[]){
    String_Log("INITIALIZING ENGINE", 0, 0);

    SDL_Window* window = Window_Init();
    SDL_Renderer* render = Render_Init(window);
    bool running = true;
    SDL_Event event;

    while(!running){
        //FIXME::make window input func for all input
        //Window_Input(&running, &event);
    }

    Garbage_Dump(window, render);
    String_Log("EXITING GAME ENGINE", 0, 0);
    return 0;
}
