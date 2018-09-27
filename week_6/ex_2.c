#include <stdio.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <memory.h>

int main() {
    char first[] = "Hello";
    char second[64];
    int n1 = (int) strlen(first);

    //creating the pipe
    int fd[2];
    pipe(fd);

    //changed part

    pid_t child = fork();
    if (child){
        write(fd[1], first, n1 + 1);
        printf("What is in the parent: %s\n", first);
        close(fd[0]);
    } else {
        read(fd[0], second, sizeof(second));
        printf("What is in the child: %s\n", second);
        close(fd[1]);
    }
    return 0;
}
