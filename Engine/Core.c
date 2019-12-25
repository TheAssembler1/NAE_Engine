#include <stdbool.h>
#include <SDL2/SDL.h>
#include "Core/Window/Window.h"
#include "Core/Timer/Timer.h"
#include "Core/Garbage/Garbage.h"
#include "Core/String_Log/String_Log.h"
#include "Objects/Objects.h"

//NOTE::each function goes in its own thread
void Core_Logic();
void Core_Render();

int main(int argc, char* argv[]){
    String_Log("INITIALIZING ENGINE", 0, 0);

    SDL_Window* window = Window_Init();
    SDL_Renderer* render = Render_Init(window);
    bool running = true;
    SDL_Event event;

    //NOTE::Camera object needs to be put into list implicitly 
    //NOTE::so we have at least one struct in render linked list

    //FIXME::put input/rendering/sound into different threads
    //FIXME::need to find a cross platform thread library

    while(!running){
        //FIXME::make window input func for all input
        //Window_Input(&running, &event);
    }

    Garbage_Dump(window, render);
    String_Log("EXITING GAME ENGINE", 0, 0);
    return 0;
}


//FIXME::this function needs to be in its own thread
void Core_Render(){

}

//FIXME::this function needs to be in its own thread
void Core_Logic(){

}
