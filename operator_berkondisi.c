#include "stdio.h"

int main(void){
    int x, y, bilangan_terbesar, bilangan_terkecil;

    x = 2;
    y = 1;

    bilangan_terbesar = x > y ? x : y;
    bilangan_terkecil = x < y ? x : y;

    printf("Bilangan terbesar adalah %d\n", bilangan_terbesar);
    printf("Bilangan terkecil adalah %d\n", bilangan_terkecil);

    return 0;
}