#include "Objects.h"

void Init_Rect_Object(RectObject object, void Render(SDL_Renderer* render), void Logic(RectObject* object)){
    object.Logic = Logic;
    object.Render = Render;
}

void Render_Rect_Object(){

}

void Unrender_Rect_Object(){
    
}