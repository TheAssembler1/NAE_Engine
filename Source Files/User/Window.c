#include <stdio.h>
#include <stdbool.h>

/*USER SETTINGS FOR THE WINDOW*/
/*MOVE THIS STRUCT OBJECT TO DISPLAY FOLDER AND MAKE A HEADER*/

//settings struct
struct NAE_Window_Settings {

	//setting the width and height of the window
	int NAE_Window_Height;
	int NAE_Window_Width;
	bool NAE_Window_X_Centered;
	bool NAE_Window_Y_Centered;

	//setting the posx and posy of the window
	int NAE_Window_PosX;
	int NAE_Window_PosY;

	//options for the window
	bool NAE_Window_Full_Screen;
	bool NAE_Window_Full_Screen_Monitor_Resolution;
	bool NAE_Window_Hidden;
	bool NAE_Window_Borderless;
	bool NAE_Window_Resizable;
	bool NAE_Window_Minimized;
};

void NAE_Set_Window_Settings(struct NAE_Window_Settings* window_settings) {

	//setting the width and height of the window
	window_settings->NAE_Window_Height = 500;
	window_settings->NAE_Window_Width = 500;
	window_settings->NAE_Window_X_Centered = false;
	window_settings->NAE_Window_Y_Centered = false;

	//setting the posx and posy of the window
	window_settings->NAE_Window_PosX = 500;
	window_settings->NAE_Window_PosY = 500;

	//options for the window
	window_settings->NAE_Window_Full_Screen = false;
	window_settings->NAE_Window_Full_Screen_Monitor_Resolution = false;
	window_settings->NAE_Window_Hidden = false;
	window_settings->NAE_Window_Borderless = false;
	window_settings->NAE_Window_Resizable = false;
	window_settings->NAE_Window_Minimized = false;
}
