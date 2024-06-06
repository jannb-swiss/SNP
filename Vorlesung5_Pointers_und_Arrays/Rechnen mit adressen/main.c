//
// Created by Jan on 19.05.2024.
//
#include <stdio.h>

int main(void) {
    int a[5] = {2, 4, 6, 8, 10};
    int *p = a;
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    a[3] = 1; // vom Compiler intern als *(a + 3) = 1 generiert
    printf("a[3] = %d \n", a[3]); // Zeigeradresse ausgeben
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    *(a + 3) = 1; // a steht für die Start Adresse von a
    printf("*(a + 3) = %d \n", *(a + 3)); // Zeigeradresse ausgeben
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    *(p + 3) = 1; // p ist auf die Start Adresse von a gesetzt
    printf("*(p + 3) = %d \n", *(p + 3)); // Zeigeradresse ausgeben
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

    p[3] = 1; // vom Compiler intern als *(p + 3) = 1 generiert
    printf("p[3] = %d \n", p[3]); // Zeigeradresse ausgeben
    printf("*(p + 3) = %d \n", *(p + 3)); // Zeigeradresse ausgeben
    for (int i = 0; i < size; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

}