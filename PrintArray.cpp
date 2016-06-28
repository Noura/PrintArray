/*
    PrintArray.h - for printing Arrays with Serial.print( ... )
    2016 Noura Howell
    https://github.com/Noura/PrintArray.git

*/

#include "PrintArray.h"

void PrintArray::printArrayInt(int * arr, int N) {
    Serial.print("[ ");
    for (int i = 0; i < N; i++) {
        Serial.print(arr[i]);Serial.print(", ");
    }
    Serial.println("]");
}

void PrintArray::printArrayUnsignedLong(unsigned long * arr, int N) {
    Serial.print("[ ");
    for (int i = 0; i < N; i++) {
        Serial.print(arr[i]);Serial.print(", ");
    }
    Serial.println("]");
}

void PrintArray::printArrayBool(bool * arr, int N) {
    Serial.print("[ ");
    for (int i = 0; i < N; i++) {
        Serial.print(arr[i]);Serial.print(", ");
    }
    Serial.println("]");
}
