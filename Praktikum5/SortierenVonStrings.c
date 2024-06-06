//
// Created by Jan on 22.04.2024.
//
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 10
#define MAX_LENGTH 20

// Funktion, um Strings in Großbuchstaben umzuwandeln
void to_uppercase(char *str) {
    while (*str) {
        *str = toupper((unsigned char) *str);
        str++;
    }
}

// Funktion, um Wörter alphabetisch zu sortieren
void sort_words(char words[MAX_WORDS][MAX_LENGTH], int count) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(words[i], words[j]) > 0) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }
}

int main() {
    char words[MAX_WORDS][MAX_LENGTH];
    char input[MAX_LENGTH];
    int count = 0;

    printf("Geben Sie bis zu 10 unterschiedliche Wörter ein (oder 'ZZZ' zum Beenden):\n");

    while (count < MAX_WORDS) {
        scanf("%19s", input);  // Liest ein Wort mit einer maximalen Länge von 19 plus Nullterminator
        to_uppercase(input);  // Wandelt das Wort in Großbuchstaben um

        if (strcmp(input, "ZZZ") == 0) {
            break;  // Beendet die Eingabe bei "ZZZ"
        }

        // Überprüfen auf Duplikate
        int duplicate = 0;
        for (int i = 0; i < count; i++) {
            if (strcmp(words[i], input) == 0) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            strcpy(words[count], input);
            count++;
        }
    }

    // Sortieren der Wörter
    sort_words(words, count);

    // Ausgabe der sortierten Wörter
    printf("Sortierte Wörter:\n");
    for (int i = 0; i < count; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
