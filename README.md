# Timing

This repo provides a library of functions dedicated to time mesurement.

Currently the library is just implemented for Arduino board (just providing a
overlay).

## Content

It allows to get the ellasped time since the micro-controller began to run
(timestamp) thanks to the following functions :
* Get_Timestamp_Millisecond
* Get_Timestamp_Microsecond

It allows to force the execution of a program to wait a certain amount of time 
thanks to the following functions :
* Wait_Millisecond
* Wait_Microsecond

## Dependencies

None.

## Use

### With the Arduino IDE

This repository shall be clone within the _librairies_ folder of the _Arduino
sketchbook folder_.
