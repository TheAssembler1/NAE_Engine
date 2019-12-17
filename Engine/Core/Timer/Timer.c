/*made by TheAssembler1*/
/*functions help the game run at 60fps*/

#include "Timer.h"

/*function initializes the timer*/
void Timer_Init(Timer* timer){
	timer->timer_started = false;
	timer->timer_paused = false;
	timer->timer_start_ticks = 0;
	timer->timer_paused_ticks = 0;
}

/*starts the timer*/
void Timer_Start(Timer* timer){
	timer->timer_started = true;
	timer->timer_paused = false;
	timer->timer_start_ticks = SDL_GetTicks();
	timer->timer_paused_ticks = 0;
}

/*gets the number of ticks*/
int Timer_Get_Ticks(Timer* timer){
	int time = 0;
	if(timer->timer_started){
		if(timer->timer_paused){
			time = timer->timer_paused_ticks;
		}
		else{
			time = SDL_GetTicks() - timer->timer_start_ticks;
		}
	}
	return time;
}

/*timer part one*/
void Timer_Part_One(float* avg_fps, int counted_frames, Timer fps_timer){
        *avg_fps = counted_frames / (Timer_Get_Ticks(&fps_timer) / 1000.f);
    	if(*avg_fps > 2000000){
            *avg_fps = 0;
        }
}

/*timer part two*/
void Timer_Part_Two(int* frame_ticks, int* counted_frames, const float SCREEN_TICKS_PER_FRAME, Timer cap_timer){
	(*counted_frames) += 1;
	*frame_ticks = Timer_Get_Ticks(&cap_timer);
	if(*frame_ticks < SCREEN_TICKS_PER_FRAME){
		//actually waiting
		SDL_Delay(SCREEN_TICKS_PER_FRAME - *frame_ticks);
	}
}