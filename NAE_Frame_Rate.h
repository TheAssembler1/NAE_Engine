#include <SDL.h>

#ifndef NAE_FRAME_RATE
#define NAE_FRAME_RATE

extern double NAE_Get_Delta_Time(Uint64* now, Uint64* last, double delta_time);

#endif