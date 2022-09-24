#include "stdio.h"

int main(){
    char karakter;
    int bilangan_bulat;
    float bilangan_riil;

    bilangan_riil = 78.3;
    bilangan_bulat = bilangan_riil;
    karakter = bilangan_bulat;

    printf("Bilangan riil: %f\n", bilangan_riil);
    printf("Bilangan bulat: %d\n", bilangan_bulat);
    printf("Karakter: %c\n", karakter);

    return 0;
}