#include <stdio.h>
#include <stdlib.h>

int *helper(int *numbers) {
    int temp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = temp;
    return numbers;
}

int main() {
    int *numbers;
    numbers = malloc(sizeof(int) * 2);
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