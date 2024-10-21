#include "Timing.h"


uint32_t Get_Timestamp_Millisecond( void )
{
    #ifdef ARDUINO
        return (uint32_t)millis();
    #else
        #error "Get_Timestamp_Millisecond() not implemented."
    #endif
}

uint32_t Get_Timestamp_Microsecond( void )
{
    #ifdef ARDUINO
        return (uint32_t)micros();
    #else
        #error "Get_Timestamp_Microsecond() not implemented."
    #endif
}
