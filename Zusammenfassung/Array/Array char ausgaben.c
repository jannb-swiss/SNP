//
// Created by Jan on 02.06.2024.
//

#include <stdio.h>

int main(void) {

    //Array hat die grösse 6 (Hallo = 5, \0 = 1 -> 5 + 1 = 6)
    char charArray[] = "Hallo";

    //Das erste Element ist an der Stelle 0 des Arrays
    printf("%c \n", charArray[0]); //H
    printf("%c \n", charArray[1]); //A
    printf("%c \n", charArray[2]); //L
    printf("%c \n", charArray[3]); //L
    printf("%c \n", charArray[4]); //O

    printf("%c \n", charArray[5]); // \0 (ist auf der Konsole nicht ersichtlich.

    printf("%c \n", charArray[6]); // ist ausserhalb des Arrays -> undefiniertes Verhalten.

}