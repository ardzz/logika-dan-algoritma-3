#include "stdio.h"

int main(void){

    int pembagi = 7;
    int x, y, z;

    x = 8 % pembagi;
    y = 13 % pembagi;
    z = 14 % pembagi;

    printf("Sisa bagi 8 dengan 7 adalah %d", x);
    printf("Sisa bagi 13 dengan 7 adalah %d", y);
    printf("Sisa bagi 14 dengan 7 adalah %d", z);

    return 0;
}