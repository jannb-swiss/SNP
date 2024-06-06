//
// Created by Jan on 06.05.2024.
//
#define MAX 1000
int doit(int b); /* Funktionsdeklaration */

int main(void) {
    return MAX + doit(10);
}

int doit(int b) { /* Funktionsdefinition */
    return MAX + b;
}
