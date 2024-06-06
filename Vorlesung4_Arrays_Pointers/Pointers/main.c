//
// Created by Jan on 19.05.2024.
//
/* pointers.c */
#include <stdio.h>

int main(void) {
    int *ap, *bp;

    int c = 5, d;

    ap = &c; // ap = Zeigeradresse auf Adresse der Variable c   *ap = Wert an der Adresse ausgeben = 5
    printf("ap = %d \n", ap); // Zeigeradresse ausgeben
    printf("*ap = %d \n", *ap); // Wert an der Adresse ausgeben


    c++; // c = 6     *ap = 6
    printf("c = %d \n", c); // c wird um eins erhöt
    printf("*ap = %d \n", *ap); // *ap zeigt auf c = 6

    *ap = -10; // Hat direkten Einfluss auf c. Da jetzt ap auf -10 zeigt auch c auf -10 c = -10  *ap = -10
    printf("c = %d \n", c); //
    printf("*ap = %d \n", *ap); //

    bp = &c; //bp zeigt jetzt auch auf die adresse von c

    c = 15; // *ap = 15 *bp = 14
    printf("*bp = %d \n", *bp);
    printf("*ap = %d \n", *ap);

    *bp = *ap / 2; // 15 / 2 = 7. alle haben jetzt 7 da wenn sich ein Wert ändert der Wert von allen ändert c = 7
    printf("*bp = %d \n", *bp);
    printf("*ap = %d \n", *ap);
    printf("c = %d \n", c);


    ap = &d; // ap zeigt jetzt auf einen neue Adresse. bp zeigt immer noch auf die adresse von c. ap = 6422024   *bp = 7
    printf("*bp = %d \n", *bp);
    printf("*ap = %d \n", *ap);
    printf("ap = %d \n", ap);
    printf("c = %d \n", c);

    d = 3; // *ap = 3    *bp = 7
    printf("*bp = %d \n", *bp);
    printf("*ap = %d \n", *ap);

}
