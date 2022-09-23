#include "stdio.h"

int main(void){
    int harga = 71500;
    int jumlah = 35;
    float harga_satuan;

    // define harga_satuan with integer division
    harga_satuan = harga / jumlah;
    printf("Harga satuan adalah %0.1f\n", harga_satuan);

    // define harga_satuan with float division
    harga_satuan = (float) harga / jumlah;
    printf("Harga satuan adalah %0.1f\n", harga_satuan);

    return 0;
}