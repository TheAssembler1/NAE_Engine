/*made by TheAssembler1*/
/*functions help the game run at 60fps*/

#ifndef TIMER_H
#define TIMER_H
#include <SDL2/SDL.h>
#include <stdbool.h>

/*timer struct*/
typedef struct Timer{
	bool timer_started;
	bool timer_paused;

	uint32_t timer_start_ticks;
	uint32_t timer_paused_ticks;
}Timer;

/*function initializes the timer*/
void Timer_Init(Timer* timer);

/*starts the timer*/
void Timer_Start(Timer* timer);

/*gets the number of ticks*/
int Timer_Get_Ticks(Timer* timer);

/*timer part one*/
void Timer_Part_One(float* avg_fps, int counted_frames, Timer fps_timer);

/*timer part two*/
void Timer_Part_Two(int* frame_ticks, int* counted_frames, const float SCREEN_TICKS_PER_FRAME, Timer cap_timer);

#endif //TIMER_H
