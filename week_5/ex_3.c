#include <stdio.h>
#include <pthread.h>
#include <time.h>

#define bufSize 10
#define timeNow time(NULL)

int counter;
int buffer[bufSize];
time_t lastTime;


void *producer(void *argp) {                //just producer thread
    while (true) {
        if (counter >= bufSize) {
            sleep(3);
            continue;
        }

        buffer[counter - 1] = counter;
        ++counter;
    }

}

void *consumer() {                              //consumer thread with pause b4 printing (depends on time)
    while (true) {
        if (counter <= 0) {
            sleep(3);
            continue;
        }

        if (timeNow - lastTime > 2) {                //checking how much time passed after last print
            fflush(stdout);
            printf("It's %d \n", buffer[counter - 1]);
            lastTime = timeNow;
        }

        buffer[counter - 1] = 0;
        --counter;
    }
}

int main() {
    pthread_t producerTh, consumerTh;
    counter = 0;
    pthread_create(&producerTh, NULL, producer, NULL);
    pthread_create(&consumerTh, NULL, consumer, NULL);

    pthread_join(producerTh, NULL);
    pthread_join(consumerTh, NULL);

    return 0;
}