//
// Created by Jan on 03.06.2024.
//
#include <stdio.h>
#include <string.h>

int main(void) {

    char charArray[] = "SNP";
    char *p = charArray; // Der Zeiger *p zeigt auf den Anfang des Arrays charArray

    int lengthSizeofArray = sizeof(charArray); // Grösse des gesamten Arrays
    int lengthSizeofPointer = sizeof(p); // Grösse des Zeigers selbst -> typischerweise 8
    int lengthSizeofStarPointer = sizeof(*p); // Grösse des Datentyps, auf den der Zeiger zeigt, hier 1 Byte (char)
    int lengthSizeofStarPointerString = strlen(p); // Länge der Zeichenkette, auf die der Zeiger zeigt. Achtung ohne 0 terminator!!!

    printf("sizeof(charArray): %i \n", lengthSizeofArray); // Ausgabe: 4, da das Array 4 Bytes groß ist (einschließlich des Nullterminators)
    printf("sizeof(p): %i \n", lengthSizeofPointer); // Ausgabe: 8, da der Zeiger auf einem 64-Bit-System 8 Bytes groß ist
    printf("sizeof(*p): %i \n", lengthSizeofStarPointer); // Ausgabe: 1, da der Zeiger auf einen char zeigt
    printf("strlen(p): %i \n", lengthSizeofStarPointerString); // Ausgabe: 3, da die Zeichenkette "SNP" 3 Zeichen lang.



}