#ifndef OBJECTS_H
#define OBJECTS_h
#include <SDL2/SDL.h>

typedef struct RectObject{

    struct RectObject* next;

    int x; int y;
    int width; int height;

    int collision_layer; int render_layer;

    void (*Render) (SDL_Renderer* render);
    void (*Logic) (struct RectObject* object);

    struct RectObject* prev;

}RectObject;

void Init_Rect_Object(RectObject object, void Render(SDL_Renderer* render), void Logic(RectObject* object));
void Render_Rect_Object();
void Unrender_Rect_Object();

#endif