//
// Created by Jan on 02.06.2024.
//

#include <stdio.h>

int main(void) {

    printf("Abschnitt 1: \n");

    int intArray1[] = {1, 2, 3};
    int *p1 = intArray1; // p1 zeigt auf die Adresse des ersten Elements von intArray1

    //Array
    // Ausgabe des ersten Werts des Arrays
    printf("intArray1[0]: %i \n", intArray1[0]);
    // Ausgabe der Speicheradresse des ersten Elements des Arrays
    printf("&intArray1[0]: %p \n", (void*)&intArray1[0]);
    // Ausgabe der Speicheradresse des gesamten Arrays (gleich wie oben)
    printf("&intArray1: %p \n", (void*)&intArray1);

    //Pointer
    // Ausgabe der Speicheradresse des Zeigers p1
    printf("&p1: %p \n", (void*)&p1);
    // Ausgabe der Adresse, auf die der Zeiger p1 zeigt (Adresse des ersten Elements von intArray1)
    printf("p1: %p \n", (void*)p1);
    // Ausgabe des ersten Werts des Arrays über den Zeiger p1
    printf("p1[0]: %i \n", p1[0]);
    // Ausgabe des ersten Werts des Arrays über Dereferenzierung des Zeigers p1
    printf("*p1: %i \n", *p1);

    // Ändern des ersten Werts im Array über den Zeiger p1
    *p1 = *(p1 + 1) + 1; // p1[0] = p1[1] + 1 --> p1[0] = 2 + 1 --> p1[0] = 3
    printf("p1[0]: %i \n", p1[0]); // Ausgabe des neuen ersten Werts des Arrays
    printf("p1[1]: %i \n", p1[1]); // Ausgabe des unveränderten zweiten Werts des Arrays


    printf("\nAbschnitt 2: \n");

    int intArray2[] = {1, 2, 3};
    int *p2 = intArray2; // p2 zeigt auf das erste Element von intArray2
    // Ausgabe der Speicheradresse von intArray2 als int-Zeiger (cast zu int entfernt Warnungen)
    printf("(int)intArray2: %p \n", (void*)intArray2);
    // Ausgabe der Speicheradresse von intArray2 (Speicheradresse des Arrays selbst)
    printf("&intArray2: %p \n", (void*)&intArray2);

    printf("p2[0] (vor aenderung): %i \n", p2[0]); // Ausgabe des neuen ersten Werts des Arrays

    // Addiert 1 zur Speicheradresse von intArray2 und weist den Wert dem ersten Element von intArray1 zu
    *p2 = (int)intArray2 + 1; // WARNUNG: Diese Zuweisung macht inhaltlich keinen Sinn und sollte vermieden werden
    printf("p2[0]: %i \n", p2[0]);
    printf("intArray2[0]: %i \n", intArray2[0]);

    return 0;

}