#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/fcntl.h>
#include <memory.h>
#include <sys/mman.h>

int main() {
    char* isMapped;
    struct stat fileS;
    int fileO;

    if (stat("ex_1.c", &fileS) < 0){
        perror("Can't get the file");
        return ENOENT;
    }

    if ((fileO = open("ex_1.txt", O_RDWR)) < 0){
        perror("Can't open the file for writing");
        return ENOENT;
    }

    size_t fileSz = (size_t) fileS.st_size;
    char* notRandomLine = "This is a nice day";
    size_t notRandomLen = strlen(notRandomLine);

    if (notRandomLen > fileSz){
        fileSz = notRandomLen;
    }

    if((isMapped = (char*)(long)(mmap(0,fileSz, PROT_READ | PROT_WRITE, MAP_SHARED, fileO, 0))) == MAP_FAILED) {
        perror("Can't map the file");
        return EBADF;
    }

    memset(isMapped, ' ', fileSz);
    strcpy(isMapped, notRandomLine);
    isMapped[notRandomLen] = ' ';
    munmap(isMapped, fileSz);

    return 0;
}