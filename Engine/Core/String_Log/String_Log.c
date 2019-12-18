#include "String_Log.h"

void String_Log(const char* string, const char* sdl_string, char message_type){
    switch(message_type){
        case 0:
            printf("MESSAGE::%s\n", string);
            break;
        case 1:
            printf("OTHER::%s\n", string);
            break;
        case 2:
            printf("ERROR::%s\n", string);
            if(sdl_string != "")
                printf("SDL ERROR::%s\n", sdl_string);
            break;
        default:
            printf("MESSAGE ERROR::INVALID MESSAGE TYPE\n");
    }
}