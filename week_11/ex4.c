//
// Created by ADMIN on 11/1/2018.
//

#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/fcntl.h>
#include <memory.h>
#include <sys/mman.h>

int main() {
    char* cop;
    char* pas;
    struct stat bufferS;
    int fileO;
    int fileI;

    fileI = open("ex_1.txt", O_RDONLY);
    fstat (fileI, &bufferS);
    fileO = open("ex1.memcpy.txt", O_RDWR | O_CREAT, 0666);
    ftruncate (fileO, bufferS.st_size);

    cop = mmap(NULL, bufferS.st_size, PROT_READ, MAP_PRIVATE, fileI, 0);

    memcpy (pas, cop, bufferS.st_size);
    munmap (cop, bufferS.st_size);
    munmap (pas, bufferS.st_size);

    close(fileI);
    close(fileO);

    return 0;
}