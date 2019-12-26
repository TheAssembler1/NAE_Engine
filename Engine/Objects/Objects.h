#ifndef OBJECTS_H
#define OBJECTS_H
#include <SDL2/SDL.h>

typedef struct Object{

    struct Object* next;

    int x; int y;
    int width; int height;

    int collision_layer; int render_layer;

    void (*Render) (SDL_Renderer* render);
    void (*Logic) (struct Object* object);

    struct Object* prev;

}Object;

//FIXME::THINK DO WE NEED A POINTER TO THE RECT OBJECT OR NAH
void Init_Object(Object* object, void Render(SDL_Renderer* render), void Logic(Object* object));
void Render_Rect_Object();
void Unrender_Rect_Object();
void Destroy_Rect_Object(Object* object);

void Camera_Logic();
void Camera_Render();

#endif