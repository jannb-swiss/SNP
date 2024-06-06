//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>
#include <string.h>

int modulo(double mod);
void moduloSchaltjahre(int year);
int moduloISBN(char *isbn);
int moduloPrimzahl(int number);

int main(void) {

    int number = 29;
    int isPrime = moduloPrimzahl(number);
    printf("Die Zahl %d ist %s \n", number, isPrime ? "eine Primzahl" : "keine Primzahl");

    return 0;
}

// Überprüft, ob eine Zahl eine Primzahl ist
int moduloPrimzahl(int number) {
    if (number <= 1) return 0; // Zahlen kleiner oder gleich 1 sind keine Primzahlen

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) return 0; // Wenn teilbar, dann keine Primzahl
    }

    return 1; // Primzahl
}