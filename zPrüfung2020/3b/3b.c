//
// Created by Jan on 18.05.2024.
//

#include <stdio.h>

void schaltjat(int year);

int main(void) {

    schaltjat(700);
}

void schaltjat(int year) {

    //int year = 2024;
    if(year % 4 == 0) {
        if (year % 400 == 0) {
            printf("Yes");
        } else if (year % 100 == 0) {
            printf("no");
        } else {
            printf("no");
        }
    }  else {
        printf("no");
    }

}