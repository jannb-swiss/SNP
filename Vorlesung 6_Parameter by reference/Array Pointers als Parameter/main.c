//
// Created by Jan on 26.05.2024.
//
#include <stdio.h>
void print_strings(const char *days[] );

int main(void) {

    const char *days[] = {"Monday", "Tuesday", "Wednesday",
                          "Thursday", "Friday", "Saturday", "Sunday"};
    print_strings(days);

}

void print_strings(const char *days[]) {

    for (int i = 0; i < sizeof(days)-1; ++i) {
        printf("%s \n", days[i]);
    }

}
