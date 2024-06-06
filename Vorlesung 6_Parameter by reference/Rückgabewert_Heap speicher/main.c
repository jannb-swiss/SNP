//
// Created by Jan on 26.05.2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strdup();

int main(void) {
    const char *original = "Hello, world!";
    char *duplicate = strdup(original);

    if (duplicate != NULL) {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate); // free the allocated memory for the duplicate string
    } else {
        printf("Memory allocation failed\n");
    }

    return 0;

}

char *strdup(const char *src) {
    if (src == NULL) return NULL;

    size_t bytes = strlen(src)+1; // also count the sentry '\0'
    char *dup = (char *)malloc(bytes);

    if (dup == NULL) {
        return NULL; // return NULL if memory allocation fails
    }

    strcpy(dup, src);
    return dup;


}
