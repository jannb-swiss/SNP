//
// Created by Jan on 02.06.2024.
//

#include <stdio.h>

int main(void) {

    //String (0-terminiesiertes char-Array -> String)
    printf("String: \n");
    char stringArray[] = "SNP";
    //char stringArray[4] = "SNP"; ist das gleiche.
    int stringArrayLength = sizeof(stringArray); //Wie gross das Array ist. sizeof() geht nicht bei pointers!

    printf("%d \n", stringArrayLength);

    for (int i = 0; i < stringArrayLength; i++) {
        printf("%c", stringArray[i]);
    }
    printf("\n \n");

    //Einfaches Array von char (nicht durch 0 terminiertes Array)
    printf("einfaches char Array: \n");
    char charArray[3] = "SN";
    int charArrayLength = sizeof(charArray); //Wie gross das Array ist, sizeof() geht nicht bei pointers!

    charArray[2] = 'P';

    printf("%d \n", charArrayLength);

    for (int i = 0; i < charArrayLength; i++) {
        printf("%c", charArray[i]);
    }
    printf("\n \n");

}