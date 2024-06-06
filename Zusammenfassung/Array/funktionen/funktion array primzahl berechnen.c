//
// Created by Jan on 04.06.2024.
//
#include <stdio.h>

int main(void) {

    int array[98];
    int j = 0;

    for (int i = 2; i <= 100; ++i) {
        array[j] = i;
        j++;
    }

    for(int i = 2; i < 100; i++) {
        if (array[i] != 0){
            for (j = 2 * i; j < 100; j += i) {
                array[j] = 0;
            }
        }
    }

    for (int i = 0; i <= 98; i++) {
        printf("%i \n", array[i]);
    }

}

//Primzahlberechnung bis zur Zahl 100 nach dem Sieb-Verfahren:
//Schreiben Sie Zahlen 2..100 in einen Array. Beginnend mit der kleinsten
//Zahl wird die Zahl als Primzahl auf dem Bildschirm ausgegeben und
//gleichzeitig alle Vielfachen dieser Zahl im Array auf 0 gesetzt. Dann wird
//die nächste Zahl, die nicht 0 ist, im Array entsprechend bearbeitet.
