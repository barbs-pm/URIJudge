#include <stdio.h>
#include <math.h>

int main (void){
int A, B, C, Maior;
    scanf("%d %d %d", &A, &B, &C);
    Maior = (A + B + abs(A - B))/2.0;
    Maior = (Maior + C + abs(Maior - C))/2;
    printf("%d eh o maior\n", Maior);

    return 0;
}
