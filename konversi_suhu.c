#include "stdio.h"

int main(void){

    int suhu_celcius;
    int suhu_fahrenheit;

    puts("Masukkan suhu dalam celcius: ");
    scanf("%d", &suhu_celcius);
    suhu_fahrenheit = (suhu_celcius * 9/5) + 32;
    printf("Suhu dalam fahrenheit adalah %d\n", suhu_fahrenheit);

    return 0;
}