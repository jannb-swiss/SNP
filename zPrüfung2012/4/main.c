//
// Created by Jan on 28.05.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* copyStringToHeap(const char *a) {

    // 1. Länge der Zeichenkette berechnen
    size_t len = strlen(a) + 1;

    // 2. Speicher im Heap für die Zeichenkette reservieren
    char* heapStr = malloc(len);

    // 3. Zeichenkette in den reservierten Speicher kopieren
    strcpy(heapStr, a);

    // 4. Zeiger auf die kopierte Zeichenkette zurückgeben
    return heapStr;
}

int main(void) {
    char a[5] = "sdas";
    printf("%p \n", &a);
    printf("%p \n", copyStringToHeap(a));
}
