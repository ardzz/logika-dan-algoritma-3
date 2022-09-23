#include "stdio.h"

int main(){
    int a, b;
    int x, y, z;

    a = 71;
    b = 68;

    x = a | b;
    y = a & b;
    z = a ^ b;

    printf("a | b = %d\n", x);
    printf("a & b = %d\n", y);
    printf("a ^ b = %d\n", z);
}