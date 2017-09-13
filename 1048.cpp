#include <math.h>
#include <stdio.h>

int main (void){
    double salario, ganho, perc, novo; //reajuste e percentual novo salario
    scanf("%lf", &salario);

    if(salario >= 0 && salario <= 400){
        perc = 15;
    }
    if(salario >= 400.01 && salario <= 800){
        perc = 12;
    }
    if(salario >= 800.01 && salario <= 1200){
        perc = 10;
    }
    if(salario >= 1200.01 && salario <= 2000){
        perc = 7;
    }
    if(salario > 2000){
        perc = 4;
    }

    ganho = perc * salario / 100;
    novo = salario + ganho;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", novo, ganho, perc);

    return 0;
}
