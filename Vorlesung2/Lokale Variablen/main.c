//
// Created by Jan on 06.05.2024.
//
/* vertausche1.c */
#include <stdio.h>

void vertausche(int a, int b);

int main(void) {

    int a, b;
    (void) printf("a = "); /* Einlesen von a und b */
    (void) scanf("%d", &a);
    (void) printf("b = ");
    (void) scanf("%d", &b);

    vertausche(a, b);

    //a und b werden ausgegeben wie eingelesen da a und b lokale variablen sind
    // und nichts mit vertausche(a, b) zuthun haben.
    (void) printf("a = %d, b = %d\n", a, b);

}

void vertausche(int a, int b) {

    int temp = a;
    a = b;
    b = temp;

}
