#include <stdbool.h>
#include <SDL2/SDL.h>
#include "Core/Window/Window.h"
#include "Core/Timer/Timer.h"
#include "Core/Garbage/Garbage.h"
#include "Core/String_Log/String_Log.h"
#include "Objects/Objects.h"

//NOTE::each function goes in its own thread
void Window_Input(bool* running, SDL_Event* event);
void Core_Logic(Object* head, Object* tail);
void Core_Render(Object* head, Object* tail, SDL_Renderer* render);

int main(int argc, char* argv[]){
    String_Log("INITIALIZING ENGINE", 0, 0);

    SDL_Window* window = Window_Init();
    SDL_Renderer* render = Render_Init(window);
    bool running = true;
    SDL_Event event;

    //NOTE::Camera object needs to be put into list implicitly 
    //NOTE::so we have at least one struct in render linked list

    //FIXME::put input/rendering/sound/logic into different threads
    //FIXME::need to find a cross platform thread library
    //FIXME::haven't implemented user specified FPS

    //setting up initial object linked list
    Object* objects_head;
    Object* objects_tail;
    Object Camera;
    objects_head = &Camera;
    Camera.prev = objects_head;
    Camera.next = objects_tail;
    String_Log("INITIALIZING CAMERA", 0, 0);
    Init_Object(&Camera, Camera_Render, Camera_Logic);

    while(!running){
        //FIXME::make window input func for all input
        //Window_Input(&running, &event);
        Core_Logic(objects_head, objects_tail);
        Core_Render(objects_head, objects_tail, render);
    }

    Garbage_Dump(window, render, objects_head, objects_tail);
    String_Log("EXITING GAME ENGINE", 0, 0);
    return 0;
}

//FIXME::this function needs to be in its own thread
void Window_Input(bool* running, SDL_Event* event){

}

//FIXME::this function needs to be in its own thread
void Core_Render(Object* head, Object* tail, SDL_Renderer* render){
    Object* temp = head;
    while(temp != tail){
        temp->Render(render);
        temp = temp->next;
    }
}

//FIXME::this function needs to be in its own thread
void Core_Logic(Object* head, Object* tail){
    Object* temp = head;
    while(temp != tail){
        temp->Logic(temp);
        temp = temp->next;
    }
}
