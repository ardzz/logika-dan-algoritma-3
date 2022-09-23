// include stdio and math
#include "stdio.h"
#include "math.h"

// define main function
int main(void){
    // define x and y variables
    int x, y;

    // count x pow y
    x = 3;
    y = 4;

    // print result
    printf("%d pangkat %d adalah %00f", x, y, pow(x, y));

    // return 0
    return 0;
}