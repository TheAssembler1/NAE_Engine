#ifndef TIMER_H
#define TIMER_H
#include <SDL2/SDL.h>
#include <stdbool.h>

typedef struct Timer{
	bool timer_started;
	bool timer_paused;

	uint32_t timer_start_ticks;
	uint32_t timer_paused_ticks;
}Timer;

void Timer_Init(Timer* timer);

void Timer_Start(Timer* timer);

int Timer_Get_Ticks(Timer* timer);

void Timer_Part_One(float* avg_fps, int counted_frames, Timer fps_timer);

void Timer_Part_Two(int* frame_ticks, int* counted_frames, const float SCREEN_TICKS_PER_FRAME, Timer cap_timer);

#endif 
