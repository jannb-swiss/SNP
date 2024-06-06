//
// Created by Jan on 19.05.2024.
//
#include <stdio.h>

int main(void) {

    int a[5] = {2, 4, 6, 8, 10};
    int *p;

    p = a + 3; // identisch zu p = &a[3];

    *(p + 1) = 17; // identisch zu p[1] = 17 oder a[4] = 17;

    //*(p – 1) = 13; // identisch zu p[-1] = 13 oder a[2] = 13;

    *(p++) = 19; // identisch zu *p = 19; p++; oder a[3] = 19; p = &p[1]; a[3] wird 19, danach zeigt p auf a[4]

    p -= 2; // identisch zu p = &p[-2] oder p = &a[2];

    //a++; // Kompilerfehler da a = &a[1] nicht erlaubt is

}