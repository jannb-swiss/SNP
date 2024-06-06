//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>

int main(void) {

    double *pointerA[5];
    double x = 10.0, y = 20.0;
    pointerA[0] = &x; // a[0] ist ein Zeiger auf x
    pointerA[1] = &y; // a[1] ist ein Zeiger auf y

    double a[5];
    a[0] = 10.0; // a[0] ist ein double-Wert
    a[1] = 20.0; // a[1] ist ein double-Wert

    return 0;

}
