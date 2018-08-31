#include <stdio.h>
#include <stdlib.h>

void square(int n) {
    char *level = malloc(sizeof(char) * (n + 1));
    level[n] = '\0';
    for (int i = 0; i < n; i++) {
        level[i] = '*';
    }
    for (int i = 0; i < n; i++) {
        printf("%s \n", level);
    }
    printf("\n");
    free(level);
}

void half_triangle_right(int n) {
    char *level = malloc(sizeof(char) * (2 * n));
    char *right;

    for (int i = 0; i < 2 * n - 1; i++) {
        level[i] = ' ';
    }
    right = level;

    for (int i = 0; i < n; i++) {
        *right = '*';
        printf("%s \n", level);
        right++;
    }
    printf("\n");
    free(level);
}

void half_triangle_left(int n) {
    char *level = malloc(sizeof(char) * (n + 1));
    char *left;

    for (int i = 0; i < n - 1; i++) {
        level[i] = ' ';
    }
    level[n] = '\0';
    left = level + (n - 1);

    for (int i = 0; i < n; i++) {
        *left = '*';
        printf("%s \n", level);
        left--;
    }
    free(level);
}

void rhombus(int n){
    if (n % 2 == 0){
        printf("we can't make rhombus with that number\n");
    }
    else{
        char *level = malloc(sizeof(char) * n / 2 + 1);
        char *left, *right;

        for (int i = 0; i < 2 * n - 1; i++) {
            level[i] = ' ';
        }
        level[2 * n - 1] = '\0';
        left = level + (n - 1);
        right = level + (n - 1);

        for (int i = 0; i <= (n / 2); i++) {
            *left = '*';
            *right = '*';
            printf("%s \n", level);
            left--;
            right++;
        }

        left++;
        right--;

        for (int i = 0; i < (n / 2); i++) {
            *left = ' ';
            *right = ' ';
            printf("%s \n", level);
            left++;
            right--;
        }
        free(level);
    }
}


int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);
    int command;
    printf("What do you want to print? Type: \n1 if you want a square \n2 if you want a right half triangle \n3 if you want a left half triangle \n4 if you want a rhombus \nprint 0 to exit \n");
    scanf("%d", &command);
    while (command != 0){
        if (command == 1){
            square(n);
            scanf("%d", &command);
        }
        else if (command == 2){
            half_triangle_right(n);
            scanf("%d", &command);
        }
        else if(command == 3){
            half_triangle_left(n);
            scanf("%d", &command);
        }
        else if (command == 4){
            rhombus(n);
            scanf("%d", &command);
        }
    }
    return 0;
}