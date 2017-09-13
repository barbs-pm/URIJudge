#include <math.h>
#include <stdio.h>

int main (void){
    int hora=0, min=0, seg=0, valor, aux;

    scanf("%d", &valor);
    aux = valor;

    while (aux >= 3600){
        hora += 1;
        aux -= 3600;
    }
    while (aux >= 60){
        min += 1;
        aux -= 60;
    }
     while (aux >= 1){
        seg += 1;
        aux -= 1;
    }

    printf("%d:%d:%d\n", hora, min, seg);


    return 0;
}
