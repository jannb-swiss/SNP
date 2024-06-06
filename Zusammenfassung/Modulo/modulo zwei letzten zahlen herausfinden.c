//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>

int modulo();

int main(void) {

    double mod = 2542359.23;
    int newMod = modulo(mod);
    printf("%i \n", newMod);

}

int modulo(double mod) {
    int integerPart = (int)mod; // entfernt alles nach das Komma

    int secondLastDigit = (integerPart / 10) % 10; // /10 um die zweit letzt Zahl zu erhalten. % gibt die 2 letzte Zahl zürick.
    //Berechnet man eine Zahl %10 bleibt immer die letzt Zahl als Rest.

    return secondLastDigit;
}

// Bestimmen Sie mithilfe des Modulo-Operators die zweitletzte Ziffer einer
// mindestens dreistelligen reellen Zahl.