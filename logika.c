#include "stdio.h"
#include "stdbool.h"

int main(){
    int x, y, z;
    bool and_operation, or_operation, xor_operation, xor_operation2;

    x = 3 < 5;
    y = 9 < 6;
    z = 2 > 1;

    and_operation = x && y;
    or_operation = x || y;
    xor_operation = x ^ y;
    xor_operation2 = x ^ z;

    printf("Operasi AND antara x dan y adalah %d\n", and_operation);
    printf("Operasi OR antara x dan y adalah %d\n", or_operation);
    printf("Operasi XOR antara x dan y adalah %d\n", xor_operation);
    printf("Operasi XOR antara x dan z adalah %d\n", xor_operation2);

}