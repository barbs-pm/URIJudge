#include <stdio.h>
#include <math.h>

int main (void){
    char nome[50];
    double vendas, salario;
    scanf("%s %lf %lf", &nome, &salario, &vendas);
    salario = salario + (vendas * 15) / 100;
    printf("TOTAL = R$ %0.2f\n", salario);
    return 0;
}

