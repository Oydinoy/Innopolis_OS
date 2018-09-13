#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


void type(){
    printf("> ");
}

void read(char *command){
    scanf("%s", command);
}

int main() {
    char *command = malloc(sizeof(char) * 256);

    while (1){
        type();
        read(command);
        if (strcmp(command, "exit")){
            break;
        }
        system(command);
    }
    free(command);
    return 0;
}
