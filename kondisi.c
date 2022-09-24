#include "stdio.h"
#include "stdbool.h"

int main(){
    int nilai_1;
    bool nilai_2;
    nilai_1 = 5 > 3;
    printf("nilai_1 = %d\n", nilai_1);

    nilai_1 = 3 > 5;
    printf("nilai_1 = %d\n", nilai_1);

    nilai_2 = 5 > 3;
    printf("nilai_2 = %d\n", nilai_2);

    nilai_2 = 3 > 5;
    printf("nilai_2 = %d\n", nilai_2);

    return 0;
}