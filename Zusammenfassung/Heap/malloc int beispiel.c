//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int anzahlElemente = 10;
    int* array;

    // Speicher für das Array dynamisch mit malloc allokieren
    array = (int*)malloc(anzahlElemente * sizeof(int));
    // malloc wird verwendet, um Speicherplatz für das Array auf dem Heap zu allokieren.
    // array = (int*)malloc(anzahlElemente * sizeof(int)); weist Speicher für anzahlElemente Ganzzahlen zu.
    // sizeof(int) stellt sicher, dass genügend Speicher für jede Ganzzahl reserviert wird.

    // Überprüfen, ob malloc erfolgreich war
    if (array == NULL) {
        printf("Speicher konnte nicht zugewiesen werden.\n");
        return 1; // Programm mit Fehler beenden
    }

    // Array mit Werten füllen
    for (int i = 0; i < anzahlElemente; i++) {
        array[i] = i * 2; // Beispielwerte: 0, 2, 4, 6, ...
    }

    // Werte im Array ausgeben
    printf("Array-Inhalt:\n");
    for (int i = 0; i < anzahlElemente; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Dynamisch allokierten Speicher freigeben
    free(array);

    return 0;
}
