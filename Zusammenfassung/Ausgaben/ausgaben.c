//
// Created by Jan on 03.06.2024.
//

#include <stdio.h>

int main() {
    int a = 10;
    unsigned int b = 20;

    printf("Signed int (%%d): %d \n", a);  // Signed int (d): 10
    printf("Signed int (%%i): %i \n", a);  // Signed int (i): 10
    printf("Unsigned int (%%u): %u \n", b);  // Unsigned int (u): 20

    float f = 3.14f;
    double d = 3.141592653589793;

    printf("Float (%%f): %f\n", f);  // Float (f): 3.140000
    printf("Double (%%f): %f\n", d);  // Double (f): 3.141593

    char ch = 'A';

    printf("Char (%%c): %c\n", ch);  // Char (c): A

    char str[] = "Hello, World!";

    printf("String (%%s): %s\n", str);  // String (s): Hello, World!

}