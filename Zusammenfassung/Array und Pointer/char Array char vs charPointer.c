//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>

int main(void) {

    // Verwendung von char* für Zeichenketten
    char* wochentag = "Sonntag"; // wochentag ist ein Zeiger auf die Zeichenkette "Sonntag"
    printf("char* wochentag: %s \n", wochentag);

    // Verwendung von char-Array für Zeichenketten
    char wochentagChar[] = "Sonntag"; // wochentagChar ist ein Array, das die Zeichenkette "Sonntag" enthält
    printf("char wochentagChar[]: %s \n", wochentagChar);

    // Verwendung von char für einzelne Zeichen
    char buchstabe = 'S'; // buchstabe ist ein einzelnes Zeichen 'S'
    printf("char buchstabe: %c \n", buchstabe);

    // Array von Zeichenketten (Zeiger auf Zeichenketten)
    char* wochentage[] = {"Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"};
    printf("char* wochentage[]: \n");
    for (int i = 0; i < 7; i++) {
        printf("%s, ", wochentage[i]);
    }
    printf("\n");

    // Array von einzelnen Zeichen (nicht geeignet für die Namen der Wochentage)
    char buchstaben[] = {'S', 'o', 'n', 'n', 't', 'a', 'g'}; // buchstaben ist ein Array von einzelnen Zeichen
    printf("char buchstaben[]: \n");
    for (int i = 0; i < 7; i++) {
        printf("%c, ", buchstaben[i]);
    }

}
