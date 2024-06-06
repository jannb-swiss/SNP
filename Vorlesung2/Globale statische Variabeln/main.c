//
// Created by Jan on 06.05.2024.
//
/* updatemax_global_static.c */
#include <stdio.h>

static int max = 0; // Definition global

// statische Variable
void updateMax(int a);

int main(void) {

    int a;
    while (1) {
        (void) printf("a = ");
        (void) scanf("%d", &a);
        updateMax(a);
        (void) printf("Maximum bis jetzt: %d\n", max);
    }

}

void updateMax(int a) {

    if (a > max) {
        max = a;
    }

}
