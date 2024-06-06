//
// Created by Jan on 26.05.2024.
//
#include <stdio.h>

int main(void) {

    int arr[5];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    // Berechnet die Anzahl der Elemente im Array, indem die Gesamtspeichergröße durch die Größe eines einzelnen Elements geteilt wird.
    int num_elements = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < num_elements; ++i) {
        printf("%d \n", arr[i]);
    }
}