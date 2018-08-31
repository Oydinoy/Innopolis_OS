#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("Enter the string to reverse: ");
    char *word;
    size_t chr = sizeof(char) * 256;
    word = malloc(chr);
    getline(&word, &chr, stdin);
    char *tale = word;
    while (*tale != '\0') {
        tale++;
    }
    while (tale >= word) {
        printf("%c", *tale);
        tale--;
    }
    free(word);
    return 0;
}