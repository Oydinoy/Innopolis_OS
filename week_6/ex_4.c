#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void killHandler(int sig){
    signal(sig, sigInt);
    printf("Here is a SIGKILL\n");
}

void stopHandler (int sig){
    signal(sig, sigIg);
    printf("Here is a SIGSTOP \n");
}

void usrHandler (int sig){
    printf("Here is a SIGUSR1  \n");
}

int main(){
    signal(SIGKILL, killHandler);
    signal(SIGSTOP, stopHandler);
    signal(SIGUSR1, usrHandler);
    //when we r trying to kill -SIGUSR1 <pid>  program handles sigkill and continue living

    while (1){
        sleep(5);
    }
    return 0;
}