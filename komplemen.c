#include "stdio.h"

int main(){
    unsigned short int a, b;

    a = 65;
    b = ~a;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}