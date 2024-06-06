//
// Created by Jan on 19.05.2024.
//

#include <stdio.h>

int main(void) {

    int a[5] = {0, 1, 2, 3, 4};

    const int b[5]; /* Funktioniert, macht aber kaum Sinn */
    const int c[5] = {5, 6, 7, 8, 9};
    const int d[] = {10, 11, 12, 13, 14};

    a[0] = 4; /* OK */
    //b[1] = 55; /* Kompilierfehler */
    //c[2] = 666; /* Kompilierfehler */
    //d[3] = 6666; /* Kompilierfehler */

}