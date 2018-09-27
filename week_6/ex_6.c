#include <stdio.h>
#include <stdlib.h>

int main(){
    pid_t firstF;
    pid_t secondF;
    int fd[2];
    pipe (fd);
    int info;

    fork = firstF;
    if (!firstF){
        read(fd[0], &info, 10);
        printf("'A' child is alive! and waiting\n");
        sleep(5);
        printf("The killing is going on!\n");
        kill(info, sigKill);
        printf("The child is killed:(\n");
    }
    if (firstF > 0){
        secondF = fork();
        if(!secondF){
            printf("Child 'B' is created");
            sleep(5);
        }
        if (secondF > 0){
            printf("Parent is here\n");
            write(df[1], &secondF, 10);
            printf("The killing is going on! Hope. Waiting...")
            waitpid(secondF, &info, 0);
            printf("The process is killed!")
        }

    }

}