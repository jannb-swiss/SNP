//
// Created by Jan on 23.05.2024.
//
#include <stdio.h>

int main(void) {

    char days[7][10] = {"Monday", "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday", "Sunday"};

    char *pdays[7] = {"Monday", "Tuesday", "Wednesday",
                      "Thursday", "Friday", "Saturday", "Sunday"};

    //* Da pdays ein Array von 7 Zeigern ist und jeder Zeiger in einem typischen 64-Bit-System 8 Bytes groß ist, beträgt die Gesamtgröße von pdays

    (void) printf("%zd %zd\n", sizeof(days), sizeof(pdays)); //days = 70 (7*10), pdays = 56

    (void) printf("%zd %zd\n", sizeof(days + 1), sizeof(pdays + 1));

    (void) printf("%zd %zd\n", sizeof(days[1]), sizeof(pdays[1]));

    (void) printf("%s %s\n", days[4], pdays[4]);

    (void) printf("%zd\n", days[4] - days[1]);

    (void) printf("%zd\n", pdays[4] - pdays[1]);

    (void) printf("%zd\n", &days[2][3] - &days[0][0]);

    (void) printf("%zd\n", &pdays[2][3] - &pdays[0][0]);

}