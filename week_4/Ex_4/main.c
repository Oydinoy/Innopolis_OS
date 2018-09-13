#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <wait.h>


void type(){
    printf("> ");
}

void read(char *command, buffer){
    getline(&command, &buffer, stdin);
}

void

int main() {
    char *command = malloc(sizeof(char) * 256);
    size_t buffer = 256;

    while (1){
        waitpid(-1, 0, 0);
        type();
        read(command);

        if (strcmp(command, "exit")){
            break;
        }

        pid_t forkPid = fork();

        if (forkPid) {
            continue;
        }
        else {
            system(command);
            exit(0);
        }
    }
    free(command);
    return 0;
}
