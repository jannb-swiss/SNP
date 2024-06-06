//
// Created by Jan on 03.06.2024.
//
#include <stdio.h>

int main(void) {

    char charArray[4] = "SNP"; // charArray ist ein Array von 4 Zeichen, das mit "SNP" initialisiert wird (letztes Zeichen ist Nullterminator)
    char *p = charArray; // p zeigt auf die Adresse des ersten Elements von charArray

    //Array
    // Ausgabe des ersten Werts des Arrays charArray
    printf("charArray[0]: %c \n", charArray[0]);
    // Ausgabe der Speicheradresse des Arrays charArray (Adresse des ersten Elements)
    printf("&charArray: %p \n", (void*)&charArray);
    // Ausgabe der Speicheradresse des Arrays charArray als int-Zeiger (nicht üblich, cast zu int entfernt)
    printf("(int*)&charArray: %p \n", (void*)(int*)&charArray);
    // Ausgabe der Speicheradresse des ersten Elements des Arrays charArray
    printf("&charArray[0]: %p \n", (void*)&charArray[0]);

    //Pointer
    // Ausgabe der Speicheradresse des Zeigers p
    printf("&p: %p \n", (void*)&p);
    // Ausgabe der Adresse, auf die der Zeiger p zeigt (Adresse des ersten Elements von charArray)
    printf("p: %p \n", (void*)p);
    // Ausgabe des ersten Werts des Arrays charArray über den Zeiger p
    printf("*p: %c \n", *p);
    // Ausgabe des ersten Werts des Arrays charArray über den Indexzugriff des Zeigers p
    printf("p[0]: %c \n", p[0]);

    // Ändern des ersten Werts im Array über den Zeiger p
    p[0] = 'A'; // p[0] = 'A' ändert den Wert des ersten Elements von charArray auf 'A'

    // Ausgabe des ersten Werts des Arrays charArray nach der Änderung
    printf("charArray[0]: %c \n", charArray[0]);
    // Ausgabe des ersten Werts des Arrays charArray über den Zeiger p nach der Änderung
    printf("*p: %c \n", *p);
    // Ausgabe des ersten Werts des Arrays charArray über den Indexzugriff des Zeigers p nach der Änderung
    printf("p[0]: %c \n", p[0]);

    return 0;

}