/*
    PrintArray.h - for printing Arrays with Serial.print( ... )
    2016 Noura Howell
    https://github.com/Noura/simple-spike-detection

*/

#ifndef PrintArray_h
#define PrintArray_h

#include "Arduino.h"
#include "HardwareSerial.h"

class PrintArray
{
    public:
        static void printArrayInt(int * arr, int N);
        static void printArrayUnsignedLong(unsigned long * arr, int N);
        static void printArrayBool(bool * arr, int N);
};

#endif
