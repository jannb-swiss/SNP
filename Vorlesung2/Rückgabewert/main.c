//
// Created by Jan on 22.04.2024.
//
#include <stdio.h>
/* increment1.c */
void increment1(int a);
int increment2(int b);

int main(void) {
    int a = 5;
    int b = 5;
    increment1(a);
    int bnew = increment2(b);
    (void) printf("%d\n", a);
    (void) printf("%d\n", bnew);
}

void increment1(int a) {
    ++a;
}

int increment2(int b) {
    return ++b;
}
