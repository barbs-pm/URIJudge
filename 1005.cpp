#include <stdio.h>
#include <math.h>

int main (void){
    double A, B, MEDIA;
    scanf("%lf %lf", &A, &B);
    MEDIA = (A * 3.5 + B * 7.5) / 11;
    printf("MEDIA = %0.5f\n", MEDIA);
    return 0;
}

