//
// Created by Jan on 06.06.2024.
//

#include <stdio.h>

void moduloSchaltjahre();


int main(void) {

    int year = 2002;
    moduloSchaltjahre(year);

}

void moduloSchaltjahre(int year) {

    if(year % 4 == 0) {
        if (year % 100 == 0){
            if (year % 400 == 0) {
                printf("Schaltjahr \n");
            } else {
                printf("kein Schaltjahr \n");
            }
        } else {
            printf("Schaltjahr \n");
        }
    } else {
        printf("kein Schaltjahr \n");
    }

}

//Zur exakten Festlegung der Schaltjahre dienen die folgenden Regeln:
//► ist die Jahreszahl durch 4 teilbar, so ist das Jahr ein Schaltjahr.
//Diese Regel hat allerdings eine Ausnahme:
//► ist die Jahreszahl durch 100 teilbar, so ist das Jahr kein Schaltjahr.
//Diese Ausnahme hat wiederum eine Ausnahme:
//► ist die Jahreszahl durch 400 teilbar, so ist das Jahr doch ein Schaltjahr.
//Erstellen Sie ein C Source Sequenz, die berechnet, ob eine Jahreszahl
//        ein Schaltjahr bezeichnet oder nicht. Geben Sie das Resultat als "YES"
//oder "NO" auf der Konsole aus.