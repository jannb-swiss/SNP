//
// Created by Jan on 06.06.2024.
//
#include <stdio.h>

// Funktion zur Berechnung des Wochentags für ein gegebenes Datum
const char* getWochentag(int tag, int monat, int jahr);

int main(void) {
    int tag = 6;
    int monat = 6;
    int jahr = 2024;

    // Ausgabe des berechneten Wochentags für das gegebene Datum
    printf("Das Datum %02d.%02d.%d ist ein %s.\n", tag, monat, jahr, getWochentag(tag, monat, jahr));
    return 0;
}

const char* getWochentag(int tag, int monat, int jahr) {
    // Array der Wochentage
    static const char* wochentage[] = {"Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"};

    // Wenn der Monat Januar oder Februar ist, wird der Monat um 12 erhöht und das Jahr um 1 verringert
    if (monat < 3) {
        monat += 12;
        jahr -= 1;
    }

    // Jahr des Jahrhunderts (z.B. 24 für 2024)
    int k = jahr % 100;
    // Jahrhundert (z.B. 20 für 2024)
    int j = jahr / 100;

    // Berechnung des Wochentags mit der Zeller-Formel
    int wochentag = (tag + (13 * (monat + 1)) / 5 + k + (k / 4) + (j / 4) - 2 * j) % 7;
    // Sicherstellen, dass der Wochentag positiv ist
    if (wochentag < 0) {
        wochentag += 7;
    }

    // Rückgabe des berechneten Wochentags als String
    return wochentage[wochentag];
}
