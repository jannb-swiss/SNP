//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char* array;
    int anzahlElemente = 10;

    // Speicher für die Zeichenkette dynamisch mit malloc allokieren
    array = (char*)malloc(anzahlElemente * sizeof(char)); // Wenn länge zu beginn noch unklar (laenge +1) für das Null-Terminierungszeichen
    // malloc wird verwendet, um Speicherplatz für die Zeichenkette auf dem Heap zu allokieren.
    // string = (char*)malloc((laenge + 1) * sizeof(char)); weist Speicher für laenge Zeichen plus wenn die länge zu beginn umbekannt ist ein
    // zusätzliches Zeichen für das Null-Terminierungszeichen (\0) zu.

    // Überprüfen, ob malloc erfolgreich war
    if (array == NULL) {
        printf("Speicher konnte nicht zugewiesen werden.\n");
        return 1; // Programm mit Fehler beenden
    }

    // Array mit Werten füllen (Beispielwerte: 'A', 'B', 'C', ...)
    for (int i = 0; i < anzahlElemente; i++) {
        array[i] = 'A' + i; // Beispielwerte: 'A', 'B', 'C', ...
    }

    // Werte im Array ausgeben
    printf("Array-Inhalt:\n");
    for (int i = 0; i < anzahlElemente; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");

    // Dynamisch allokierten Speicher freigeben
    free(array);

    return 0;
}