#include <stdio.h>
#include <math.h>

int main (void){
    double A, B, C, area;
    scanf("%lf %lf %lf", &A, &B, &C);
    area = (A * C)/2.0;
    printf("TRIANGULO: %0.3lf\n", area);
    area = 3.14159 * pow(C,2);
    printf("CIRCULO: %0.3lf\n", area);
    area = (A + B) * C/2.0;
    printf("TRAPEZIO: %0.3lf\n", area);
    area = pow(B,2);
    printf("QUADRADO: %0.3lf\n", area);
    area = A * B;
    printf("RETANGULO: %0.3lf\n", area);

    return 0;
}
