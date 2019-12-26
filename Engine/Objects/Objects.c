#include "Objects.h"

void Init_Object(Object* object, void Render(SDL_Renderer* render), void Logic(Object* object)){
    object->Logic = Logic;
    object->Render = Render;
}

void Render_Rect_Object(){

}

void Unrender_Rect_Object(){

}

void Destroy_Rect_Object(Object* object){
    free(object);
}

void Camera_Logic(){}
void Camera_Render(){}