#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>
#include <sys/resource.h>

int main() {
    for (int i; i < 10; i++) {
        void *v = malloc(1024 * 1024 * 10);
        memset(v, 0, 10240);
        sleep(1);

        getrusage(REUSAGE_SELF, &usage);
        print()
    }


}
