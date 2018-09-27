#include <sys/param.h>
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/signal.h>

int main(){
    pid_t pid;
    pid = fork();

    if(pid > 0){
        printf("Parent is here\n");
        sleep(5);
        kill(pid, SIGTERM);
    }
    else{
        while (1){
            printf("Child is alive!\n");
            sleep(1);
        }
    }
}
