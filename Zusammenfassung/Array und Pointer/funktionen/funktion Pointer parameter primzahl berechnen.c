//
// Created by Jan on 04.06.2024.
//
#include <stdio.h>

void berechnePrimzahlen(int* array, int size);

int main(void) {
    int array[98];
    int j = 0;

    // Initialisiere das Array mit Zahlen von 2 bis 100
    for (int i = 2; i <= 100; ++i) {
        array[j] = i;
        j++;
    }

    //muss nach array instanzierung kommen!
    int *p = array;

    // Rufe die Funktion zur Berechnung der Primzahlen auf
    berechnePrimzahlen(p, 98);

    // Gib die berechneten Primzahlen aus
    for (int i = 0; i < 98; i++) {
        if (array[i] != 0) {
            printf("%i \n", array[i]);
        }
    }

    return 0;
}

void berechnePrimzahlen(int *p, int size) {

    int j = 0;

    // Sieb des Eratosthenes zur Berechnung der Primzahlen
    for (int i = 2; i < size; i++) {
        if (p[i] != 0) {
            for (j = 2 * i; j < size; j += i) {
                p[j] = 0;
            }
        }
    }
}

//Primzahlberechnung bis zur Zahl 100 nach dem Sieb-Verfahren:
//Schreiben Sie Zahlen 2..100 in einen Array. Beginnend mit der kleinsten
//Zahl wird die Zahl als Primzahl auf dem Bildschirm ausgegeben und
//gleichzeitig alle Vielfachen dieser Zahl im Array auf 0 gesetzt. Dann wird
//die nächste Zahl, die nicht 0 ist, im Array entsprechend bearbeitet.