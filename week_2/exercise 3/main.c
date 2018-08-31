#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    char *level = malloc(sizeof(char) * (2 * n));
    char *left, *right;

    for (int i = 0; i < 2 * n - 1; i++) {
        level[i] = ' ';
    }
    level[2 * n - 1] = '\0';
    left = level + (n - 1);
    right = level + (n - 1);

    for (int i = 0; i < n; i++) {
        *left = '*';
        *right = '*';
        printf("%s \n", level);
        left--;
        right++;
    }
    free(level);
    return 0;
}