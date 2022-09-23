#include "stdio.h"
#include "math.h"

int main(void){

    int bilangan_akar;
    int bilangan_sin;
    float bilangan_desimal;

    puts("Masukkan bilangan yang ingin dihitung akarnya: ");
    scanf("%d", &bilangan_akar);
    int akar = sqrt(bilangan_akar);
    printf("Akar dari %d adalah %d\n", bilangan_akar, akar);

    puts("Masukkan bilangan yang ingin dihitung sinnya: ");
    scanf("%d", &bilangan_sin);
    float sin_ = sin(bilangan_sin);
    printf("Sin dari %d adalah %f\n", bilangan_sin, round(sin_));

    puts("Masukkan bilangan desimal yang ingin dibulatkan: ");
    scanf("%f", &bilangan_desimal);
    printf("Bilangan desimal %f dibulatkan menjadi %f\n", bilangan_desimal, round(bilangan_desimal));

    return 0;
}