#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

int ex_1() {
    int a;
    float b;
    double c;
    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;
    printf("max integer is %d, with the size %lu bytes \n", a, sizeof(a));
    printf("max float is %f, with the size %lu bytes \n", b, sizeof(b));
    printf("max double is %lf, with the size %lu bytes \n", c, sizeof(c));
    return 0;
}

int ex_2() {
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

int ex_3(int n) {
    char *level = malloc(sizeof(char)*(2*n));
    char *left, *right;

    for (int i = 0; i < 2*n - 1; i++){
        level[i] = ' ';
    }
    level[2*n - 1] = '\0';
    left = level + (n - 1);
    right = level + (n - 1);

    for (int i = 0; i < n; i++){
        *left = '*';
        *right = '*';
        printf("%s \n", level);
        left--;
        right++;
    }
    free (level);
    return 0;
}

int* helper(int *numbers){
    int temp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = temp;
    return numbers;
}

int ex_4(){
    int *numbers;
    numbers = malloc(sizeof(int)*2);
    int temp;
    printf("Type the integers you want to swap ");
    scanf("%d", &temp);
    numbers[0] = temp;
    scanf("%d", &temp);
    numbers[1] = temp;
    numbers = helper(numbers);
    printf("Here are the swaped integers: %d, %d \n", numbers[0], numbers[1]);
    free(numbers);
    return 0;
}


int main(int argc, char *argv[]) {

    printf("press Enter to start the first exercise\n");
    getchar();
    if (ex_1()) {
        printf("something weird happened, it doesn't work :(\n\n");
    }
    else{
        printf("\nThe first exercise works correctly\n\n");
    }

    printf("press Enter to start the second exercise\n");
    getchar();
    if (ex_2()) {
        printf("something weird happened, it doesn't work :(\n\n");
    }
    else{
        printf("\nThe second exercise works correctly\n\n");
    }

    printf("press Enter to start the third exercise\n");
    getchar();
    int n = atoi(argv[1]);
    if (ex_3(n)) {
        printf("something weird happened, it doesn't work :(\n");
    }
    else{
        printf("\nThe third exercise works correctly\n\n");
    }

    printf("press Enter to start the fourth exercise\n");
    getchar();
    if (ex_4()) {
        printf("something weird happened, it doesn't work :(\n\n");
    }
    else{
        printf("\nThe fourth exercise works correctly\n\n");
    }

    return 0;
}

