//
// Created by Jan on 28.05.2024.
//
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 6
// function declaration goes here
int main(void) {
    int testArray[] = {9,8,7,6,5,4};
    (void) printf("The sum is %d\n", sumOfArrayElements(testArray, LENGTH) );
    return EXIT_SUCCESS;
}


int sumOfArrayElements(int testArray[], int arrayLength) {
    int *c = testArray;
    int sum = 0;

    for (int i = 0; i < arrayLength; ++i) {
       sum = sum + c[i];
    }
    
    return sum;
}