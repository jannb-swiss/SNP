#include <stdio.h>

//Zusätzlich wird die Funktionsdeklaration vor dem ersten Aufruf der Funktion im Programm benötigt
int max(int a, int b);

int main() {

    int a = 5;
    int b = 3;
    int c;
    printf("Max: %d\n", c);

    c = max(a, b); /* c = 5 */
    printf("Max max(a, b): %d\n", c);

    c = max(7, 13); /* c = 13 */
    printf("Max max(7, 13): %d\n", c);

    (void) max(15, 4); /* OK, aber hier sinnlos */

    c = 5 + max(8, a); /* c = 13 */
    printf("Max 5 + max(8, a): %d\n", c);

    c = max(max(5, 9), max (b, 12)); /* c = 12 */
    printf("Max max(max(5, 9), max (b, 12)): %d\n", c);
    return 0;
}

//Bei der Funktionsdefinition wird der Code der Funktion genau einmal im Programm implementiert (ODR)
int max(int a, int b) {
    if(a >= b) {
        return a;
    }
    return b;
}


