#include <stdio.h>

int main(){
    double x, y = 3.0;
    int i, j = 4;

    i = 2.5 + y; // => 2.5 + 3.0 = 5.5 -> 5
    printf("i = %d \n", i);

    x = 5 * i / 3; // => 5 * 5 / 3 = 0
    printf("x = %f \n", x);

    x = 5.0 * i / 3;
    printf("x = %f \n", x);

    i += j; // 5 + 4 = 9
    printf("i = %d \n", i);

    i = ++j; // 1 + 4 = 5
    printf("i = %d \n", i);

    i = j++; // 4 + 1 = 5
    printf("i = %d \n", i);

    x = 3 + (y = i + 5.0); // 3 + 10.0
    printf("x = %f \n", x);
}
