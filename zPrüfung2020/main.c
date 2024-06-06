//
// Created by Jan on 26.05.2024.
//
#include <stdio.h>
void increment( );

int main(void) {
    int a = 3, b = 5;
    increment(&a, b); // after the call, the following condition must be fulfilled: a = a + b (= 8)
    printf("%d\n", a);
}

void increment(int *a, int b) {
    *a = *a + b;
}

