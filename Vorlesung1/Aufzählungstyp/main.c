//
// Created by Jan on 22.04.2024.
//
#include <stdio.h>
#include <stdlib.h>
enum wochentage {Montag, Dienstag, Mittwoch, Donnerstag, Freitag, Samstag, Sonntag};

int main(void) {
    enum wochentage w1 = Mittwoch; /* w1 hat den Wert 2 */
    enum wochentage w2 = 77; /* Funktioniert auch,w2 hat den Wert 77 */
    enum wochentage w3 = Montag;

    printf("w1 = %d \n", w1);
    printf("w2 = %d \n", w2);
    printf("w3 = %d \n", w3);

    return EXIT_SUCCESS;
}
