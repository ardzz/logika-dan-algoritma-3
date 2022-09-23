#include "stdio.h"

int main(){
    int nilai;

    nilai = (5 > 3, 3 > 5);
    printf("Hasil dari (5 > 3, 3 > 5) adalah %d\n", nilai);

    // reverse nilai
    nilai = (3 > 5, 5 > 3);
    printf("Hasil dari (3 > 5, 5 > 3) adalah %d\n", nilai);

    return 0;
}