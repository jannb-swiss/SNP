//
// Created by Jan on 19.05.2024.
//
#include <stdio.h>

int main(void) {
    char a[] = "Hans";
    char b[5];
    (void) printf("%s\n", a); // String in a wird ausgegeben -->
                                    // "Hans", printf erkennt \0 am Ende

    b[0] = 'H';
    b[1] = 'a';
    b[2] = 'n';
    b[3] = 's';
    (void) printf("%s\n", b); // String in b wird ausgegeben -->
                                    // "Hans", kein \0 nach dem s -->
                                    // printf gibt weiter Zeichen aus
                                    // bis irgendwann \0 im Speicher
                                    // gefunden wird
    b[4] = '\0';
    (void) printf("%s\n", b); // \0 am Ende wird von printf
                                    // erkannt
}
