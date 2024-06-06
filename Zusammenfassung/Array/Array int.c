//
// Created by Jan on 04.06.2024.
//

#include <stdio.h>

int main(void) {

    //int Array
    printf("int Array: \n");
    int intArray[] = {1, 2, 3};

    int intArraySizeInBytes = sizeof(intArray); // Größe des gesamten Arrays in Bytes
    int intElementSizeInBytes = sizeof(intArray[0]); // Größe eines einzelnen Elements im Array
    int intArrayLength = intArraySizeInBytes / intElementSizeInBytes; // Anzahl der Elemente im Array

    printf("%d \n", intArrayLength);

    for (int i = 0; i < intArrayLength; i++) {
        printf("%i", intArray[i]);
    }

    return 0;

}