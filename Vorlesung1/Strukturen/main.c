//
// Created by Jan on 22.04.2024.
//
/* point3d.c */
#include <stdio.h>
#include <stdlib.h>

struct point3D { /* Deklaration der Struktur */
    double x, y, z;
};

int main(void) {

    struct point3D ptA = {2.0, 4.0, 6.0}, ptB;

    ptB = ptA; /* Kopiert die komplette Struktur */
    ptA.x = 5; /* Zugriff auf einzelne Elemente */
    ptA.y += ptA.z;

    /* Output: A = (5,10,6), B = (2,4,6) */
    (void) printf("A = (%g,%g,%g)\n", ptA.x, ptA.y, ptA.z);
    (void) printf("B = (%g,%g,%g)\n", ptB.x, ptB.y, ptB.z);

    return EXIT_SUCCESS;
}

