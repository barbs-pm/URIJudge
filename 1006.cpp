#include <stdio.h>
#include <math.h>

int main (void){
    double A, B, C, MEDIA;
    scanf("%lf %lf %lf", &A, &B, &C);
    MEDIA = (A * 2 + B * 3 + C * 5) / 10;
    /*
        1º - Multiplicar nota pelo peso;
        2º - Somar as multiplicações;
        3º - Dividir pela soma dos pesos;
    */
    printf("MEDIA = %0.1f\n", MEDIA);
    return 0;
}
