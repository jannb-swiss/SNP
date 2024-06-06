//
// Created by Jan on 02.06.2024.
//

#include <stdio.h>

int main(void) {

    int intArray[] = {1, 2, 3};
    int *p = intArray; // *p zeigt auf die Adresse von intArray

    int sizeIntArray = sizeof(intArray);
    int sizeP = sizeof(p);

    printf("sizeof(intArray): %i \n", sizeIntArray); // sizeof(intArray) gibt 12 zurück, da das Array 3 int-Elemente enthält und die Gesamtgrösse 3 * 4 = 12 Bytes beträgt.
    printf("sizeof(p): %i \n", sizeP); // sizeof(p) gibt 8 zurück, da die Grösse eines Pointers auf einem 64-Bit-System 8 Bytes beträgt.

    int intArraySizeInBytes = sizeof(intArray); // Grösse des gesamten Arrays in Bytes -> 12
    int intElementSizeInBytes = sizeof(intArray[0]); // Grösse eines einzelnen Elements im Array -> 4
    int intArrayLength = intArraySizeInBytes / intElementSizeInBytes; // Anzahl der Elemente im Array -> 3

    // Die Grösse eines Arrays kann nicht mit dem Pointer ermittelt werden.
    int intPSizeInBytes = sizeof(p); // falscher Wert!
    int intPElementSizeInBytes = sizeof(p[0]); // falscher Wert!
    int intPLength = intPSizeInBytes / intPElementSizeInBytes; // falscher Wert!

    printf("intArraySizeInBytes / intElementSizeInBytes: %i \n", intArrayLength);
    printf("intPSizeInBytes / intPElementSizeInBytes: %i \n", intPLength);

    return 0;

}