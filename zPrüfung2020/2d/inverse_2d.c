//
// Created by Jan on 18.05.2024.
//

#include <stdio.h>

void inverse(char * const pc);

int main(void) {

    char c[] = "SEPFS16";
    char *p = c;
    inverse(p);

}

void inverse(char * const pc) {

    int length = sizeof(pc) - 1;
    char n[length];
    char *p1 = n;
    int i = 0;

    for (i = 0; i <= length; i ++ ) {
        p1[i] = pc[length - 1 - i];
    }

    printf("p1 %s\n",p1);
}