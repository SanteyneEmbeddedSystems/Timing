#ifndef TIMING_H
#define TIMING_H

#include <stdint.h>

#ifdef ARDUINO
    #include "Arduino.h"
    #define Wait_Millisecond(ms) delay(ms)
    #define Wait_Microsecond(us) delayMicroseconds(us)
#else
    #error "Timing library not implemented."
#endif


uint32_t Get_Timestamp_Millisecond( void );
uint32_t Get_Timestamp_Microsecond( void );

#endif