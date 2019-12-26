#include "Garbage.h"

void Garbage_Dump(SDL_Window* window, SDL_Renderer* render, Object* head, Object* tail){
	Object* temp = head;
	//FIXME::not actually freeing the objects yet
	//make sure to get this working
	while(temp != tail){	
		temp = temp->next;
	}
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(render);
	SDL_Quit();
	String_Log("DUMPING MEMORY", 0, 0);
}
