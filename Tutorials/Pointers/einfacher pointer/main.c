//
// Created by Jan on 26.05.2024.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i = 2;

    printf("i = %d \n", i);
    printf("&i = 0x%d \n", &i); //speicheradresse auf dem Stack.

    int* j; // Erstellt einen Int-Pointer mit dem Namen j
    j = (int*) malloc(sizeof(int)); //reserviert speicher auf dem heap
    *j = 12;

    printf("j = %d \n", j); // Heap
    printf("&j = 0x%d \n", &j); // Adresse auf dem Stack aber zeigt auf den Heap
    printf("*j = 0x%d \n", *j); // Heap

}
