#ifndef GARBAGE_H
#define GARBAGE_H
#include <SDL2/SDL.h>
#include "../../Objects/Objects.h"
#include "../String_Log/String_Log.h"

void Garbage_Dump(SDL_Window* window, SDL_Renderer* render, Object* head, Object* tail);

#endif
