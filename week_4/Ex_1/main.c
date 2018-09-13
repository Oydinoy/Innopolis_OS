#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    int PID = fork();
    int n;

    if (PID){
        printf("Hello from parent! My PID is %d.\n", getpid());  /*this one is parent */
    }

    else if (!PID){
        printf("Hello from child! My PID is %d.\n", getpid());   /* this case is a child */
    }

    return 0;
}