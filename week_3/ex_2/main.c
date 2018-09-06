#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int *bubble_sort(int *numbers){
    int n = numbers[0];
    int switchs = 1;
    int temp;
    while (switchs){
        switchs = 0;
        for (int i = 1; i<numbers[0]; i++){
            if (numbers[i] > numbers[i+1]){
                switchs++;
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
            }
        }
    }
    return numbers;
}

int main() {
    int *numbers;
    numbers = malloc(sizeof(int)*256);
    int *tail = &numbers[1];
    numbers[0] = 0;
    int inp;
    printf("Enter the numbers in a row, ending with 0 \n");
    scanf("%d", &inp);
    while (inp){
        *tail = inp;
        tail++;
        numbers[0]++;
        scanf("%d", &inp);
    }
    numbers = bubble_sort(numbers);
    for (int i = 1; i <= numbers[0]; i++){
        printf("%d  ", numbers[i]);
    }
    return 0;
}