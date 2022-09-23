#include "stdio.h"

int main(void){
    int jumlah;
    float harga_satuan;
    double harga_total;

    jumlah = 7;
    harga_satuan = 7500.0;
    harga_total = jumlah * harga_satuan;

    printf("Jumlah harga yang harus dibayar adalah Rp. %0.1f\n", harga_total);
}