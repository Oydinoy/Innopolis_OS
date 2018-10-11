#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
#include <sys/resource.h>

int main() {
    struct rusage usage;
    for (int i; i < 10; i++) {
        void *v = malloc(1024 * 1024 * 10);
        memset(v, 0, 10240);
        getrusage(RUSAGE_SELF, &usage);
        printf("%d/n", (int)usage.ru_maxrss);
        sleep(1);
    }
    return 0;
}
