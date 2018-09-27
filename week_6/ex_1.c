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

    //transfering the text
    write(fd[1], first, (n1 + 1));
    close(fd[1]);
    int n2 = (int) strlen(first);
    read(fd[0], second, n2);
    close(fd[0]);

    //showing the result
    printf("What was in the beginning: %s\n", first);
    printf("What came from the pipe: %s", second);
    return 0;
}
