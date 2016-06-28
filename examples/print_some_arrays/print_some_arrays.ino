/*  Print Some Arrays - Example Code
    2016 Noura Howell
    https://github.com/Noura/PrintArray.git
*/

#include <PrintArray.h>

bool array1[] = {true, true, false};
int array2[] = {1, 2, 3, 4};
unsigned long array3[] = {1, 2, 3, 4, 5};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("array1: ");
  PrintArray::printArrayBool(array1, 3);
  
  Serial.print("array2: ");
  PrintArray::printArrayInt(array2, 4);
  
  Serial.print("array3: ");
  PrintArray::printArrayUnsignedLong(array3, 5);
  
  Serial.println();
}
