#include <stdio.h>

int main(){

    float pulpen, pensil, buku;
    float uang;
    pulpen = 200;
    pensil = 1000;
    buku = 500;
    uang = 170000;

    int pembelian = pulpen*15 + pensil*50 + buku*12;
    float hasil = uang - pembelian;
    printf("Sisa uang dari pak Alber adalah %.2f ", hasil);

}