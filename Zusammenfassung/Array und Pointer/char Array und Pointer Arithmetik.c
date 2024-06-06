//
// Created by Jan on 03.06.2024.
//
#include <stdio.h>

int main(void) {

    char charArray[] = "SNPZHAW";
    char *p = charArray; // *p zeigt auf die Adresse von charArray

    printf("p[0]: %c \n", p[0]);
    printf("p[0] - p[2]: %d \n", p[0] - p[2]); // Berechnet die Differenz der ASCII-Werte von 'S' und 'P'
    printf("p[0] - p[3]: %d \n", p[0] - p[3]); // Berechnet die Differenz der ASCII-Werte von 'S' und 'Z'
    printf("p + p[0] - p[2]: %s \n", p + p[0] - p[2]); // Ausgabe des Strings ab der neuen Zeigerposition (ab der 3ten Stelle)
    printf("p[1] + p[2] - p[4]: %d \n", p[1] + p[2] - p[4]); // ASCII-Wert 78 + ASCII-Wert 80 - ASCII-Wert 72 = 86


}