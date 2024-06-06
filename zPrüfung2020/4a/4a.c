//
// Created by Jan on 19.05.2024.
//
#include <stdio.h>

void inverse(char * const pc);

int main(void) {

    int arr[5] = {10, 20, 30, 40, 50};
    int *pi1, *pi2;
    int i = 2;

    pi2 = &arr[1];  // pi2 zeigt auf den Wert 20
    pi1 = pi2 + i;  // pi1 zeigt auf den Wert 40 (pi2 + 2)
    printf("pi1 points to value: %d\n", *pi1);  // Ausgabe: 40

    pi1 = i + pi2;  // pi1 zeigt wieder auf den Wert 40 (i + pi2)
    printf("pi1 points to value: %d\n", *pi1);  // Ausgabe: 40

    // i = pi1 * pi2;  // Dieser Code führt zu einem Kompilierfehler

    i = pi1 - pi2;  // i wird der Wert 2 zugewiesen
    printf("i: %d\n", i);  // Ausgabe: 2



    return 0;

}