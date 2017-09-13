#include <stdio.h>
#include <math.h>

int main (void) {
    int num, hora;
    float valor_hora, valor;

    scanf("%d %d %f", &num, &hora, &valor_hora);
    valor = hora * valor_hora;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n", num, valor);

    return 0;
}
