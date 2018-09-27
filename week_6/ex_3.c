#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


//handling the signal
void handler(int n){
    signal(n, SIGINT);
    printf("Press 1 to terminate\n");
    char inp = getchar();
    if (inp == '1'){
        printf("The program is tTerminated\n");
        exit(1);
    } else{
        signal(SIGINT, handler);
    }

}

int main(){
    signal(SIGINT, handler);

    //the process
    while (1){
        printf("\nThe program is running\n");
        fflush(stdout);
        sleep(3);
    }
    return 0;
}