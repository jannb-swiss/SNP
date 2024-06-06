//
// Created by Jan on 22.04.2024.
//
/* outformat.c */
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const double pi = 3.1415926535;
    for (int r = 5; r <= 20; r += 5) { // code to add here
        double area = pi * r * r;
        printf("Radius = %d -> Flaech [sic] = %.2f\n", r, area);
    }
    return EXIT_SUCCESS;
}
