#include <stdio.h>
#include <pthread.h>;

void *todo(void *argp) {
    printf("\tThread № %d is simulating work\n", *(int *) argp);
}

int main() {
    pthread_t threads[10];
    for (int i = 1; i <= 10; i++) {
        printf("\nThread № %d is created and starts working\n", i);
        int arg = i;
        pthread_create(&threads[i], 0, todo, &arg);
        pthread_join(threads[i], 0);
        printf("Thread № %d finished working\n", i);
    }
    return 0;
}