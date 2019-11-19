#include <stdio.h>
#include <stdbool.h>
#include <SDL.h>

//moving objects
struct NAE_Object {

	//x y width and height
	int NAE_PosX, NAE_PosY;
	int NAE_Width, NAE_Height;

	//says what type of object
	bool NAE_Static_Object;
	bool NAE_Animated;

	//logic structure for the object
	void (*NAE_Logic);

	//returns the current texture to be displayed
	SDL_Texture (*NAE_Animation);

	//texture of there is no animation
	SDL_Texture* NAE_Texture;

	//links to next object to be updated
	struct NAE_Kinematic_Object* NAE_next;
};

struct NAE_Game_Controller_Object {

	//logic for the object
	void(*NAE_Logic);

	//links to next object to be updated
	struct NAE_Game_Controller_Object* NAE_next;
};
