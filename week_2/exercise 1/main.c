#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>

int main() {
    int a;
    float b;
    double c;
    a = INT_MAX;
    b = FLT_MAX;
    c = DBL_MAX;
    printf("max integer is %d, with the size %lu bytes \n", a, sizeof(a));
    printf("max float is %f, with the size %lu bytes \n", b, sizeof(b));
    printf("max double is %lf, with the size %lu bytes \n", c, sizeof(c));
    return 0;
}