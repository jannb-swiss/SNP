//
// Created by Jan on 03.06.2024.
//

#include <stdio.h>
#include <string.h>

void inverse();

int main(void) {

    char str[] = "Hello, World!";
    char *p = str;
    inverse(p);

}

void inverse(char* const pc) {

    int length = strlen(pc); // da pc ein pointer ist kann nicht sizeof() verwendet werden!
    int newC[length];

    for (int i = 0; i < length; ++i) {
        newC[i] = pc[length - 1 - i];
    }

    // Für die Ausgabe
    for (int i = 0; i < length; i++) {
        printf("%c", newC[i]);
    }

}

//Schreiben Sie die Funktion inverse um c[ ] zu invertieren