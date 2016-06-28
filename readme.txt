Printing arrays to Serial on Arduino for convenience for debugging
2016 Noura Howell
https://github.com/Noura/PrintArray.git

Currently supports bool, int, and unsigned long arrays. Pull requests to support other types are welcome, just threw this together quickly for another project.

    PrintArray::printArrayBool(<array>, <array length as int>);
    PrintArray::printArrayInt(<array>, <array length as int>);
    PrintArray::printArrayUnsignedLong(<array>, <array length as int>);

Usage Notes
--------------------------------------------------------------------------------
Note that you don't need to instantiate the class to make an object. PrintArray is just a collection of methods.


    #include <PrintArray.h>
    ...
    int arr[] = {1, 2, 3};
    ...
    void setup() {
        ...
        Serial.begin(9600);
    }
    void loop() {
        ...
        Serial.print("my array: ");
        // give it the array and the length of the array
        // choose the method for the appropriate type (in this case int)
        PrintArray::printArrayInt(arr, 3);
    }

Installation
--------------------------------------------------------------------------------

To install this library, just place this entire folder as a subfolder in the directory where your Arduino sketches are stored by default. Probably something like ~/Documents/Arduino/libraries 

When installed, this library should look like:

libraries/PrintArray                   (this library's folder)
libraries/PrintArray/PrintArray.cpp    (the library implementation file)
libraries/PrintArray/PrintArray.h      (the library description file)
libraries/PrintArray/examples          (the examples in the "open" menu)
libraries/PrintArray/readme.txt        (this file)

Building
--------------------------------------------------------------------------------

After this library is installed, you just have to start the Arduino application.
You may see a few warning messages as it's built.

To use this library in a sketch, go to the Sketch | Import Library menu and
select PrintArray.  This will add a corresponding line to the top of your sketch:
#include <PrintArray.h>

To stop using this library, delete that line from your sketch.

