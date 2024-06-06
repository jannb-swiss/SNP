//
// Created by Jan on 05.06.2024.
//
#include <stdio.h>

int main(void) {

    int p1 = 20;
    int p2 = 30;

    int *pi1 = &p1; // bei einem Pointer auf einen int muss & verwendet werden.
    int *pi2 = &p2; // bei einem Pointer auf einen int muss & verwendet werden.
    int i = 10;

    // Ausgabe der Adressen von p1 und p2
    printf("Adresse von p1: %p \n", (void*)&p1);
    printf("Adresse von p2: %p \n", (void*)&p2);

    // Ausgabe der Adressen von p1 und p2 über die Zeiger
    printf("Adresse von p1 (pi1): %p \n", (void*)pi1);
    printf("Adresse von p2 (pi2): %p \n", (void*)pi2);

    // Ausgabe der Adressen von pi1 und pi2 selbst
    printf("Adresse von pi1: %p \n", (void*)&pi1);
    printf("Adresse von pi2: %p \n", (void*)&pi2);

    // Ausgabe der Werte von p1 und p2 über die Zeiger
    printf("*pi1: %d \n", *pi1); // Ausgabe von p1 durch den Pointer
    printf("*pi2: %d \n", *pi2); // Ausgabe von p2 durch den Pointer

    // pi1 = pi2 + i;
    // Erklärung: pi1 wird auf die Adresse gesetzt, die sich i (10) int-Einheiten nach der Adresse befindet, auf die pi2 zeigt.
    pi1 = pi2 + i;
    printf("pi1 = pi2 + i: %p \n", (void*)pi1);

    // pi1 = i + pi2;
    // Erklärung: pi1 wird auf die Adresse gesetzt, die sich i (10) int-Einheiten nach der Adresse befindet, auf die pi2 zeigt (gleiche wie oben, nur andere Reihenfolge).
    pi1 = i + pi2;
    printf("pi1 = i + pi2: %p \n", (void*)pi1);

    // i = pi1 * pi2;
    // ACHTUNG!! Erklärung: i wird auf das Produkt der Adressen gesetzt, auf die pi1 und pi2 zeigen (führt zu undefiniertem Verhalten).
    i = (int)pi1 * (int)pi2;
    printf("i = pi1 * pi2: %d \n", i);

    // i = pi1 - pi2;
    // Erklärung: i wird auf die Differenz der Adressen gesetzt, auf die pi1 und pi2 zeigen.
    i = pi1 - pi2;
    printf("i = pi1 - pi2: %d \n", i);

    // i = pi1 + pi2;
    // ACHTUNG!! Erklärung: i wird auf die Summe der Adressen gesetzt, auf die pi1 und pi2 zeigen (führt zu undefiniertem Verhalten).
    i = (int)pi1 + (int)pi2;
    printf("i = pi1 + pi2: %d \n", i);

    return 0;
}