#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int anos=0, meses=0, dias, valor, aux;
    scanf("%d", &valor);
    aux = valor;

    while(aux >= 365){
        anos += 1;
        aux -= 365;
    }
    while(aux >= 30){
        meses += 1;
        aux -= 30;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, aux);
    return 0;
}
