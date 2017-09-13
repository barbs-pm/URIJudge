#include <stdio.h>

int main(void){
    int ent, qnt;
    double valor;
    scanf("%d %d", &ent, &qnt);

    if(ent == 1){
        valor = 4.0 * qnt;
    } else if(ent == 2) {
        valor = 4.5 * qnt;
    } else if(ent == 3) {
        valor = 5.0 * qnt;
    } else if(ent == 4) {
        valor = 2.0 * qnt;
    } else if(ent == 5) {
        valor = 1.5 * qnt;
    }


    printf("Total: R$ %.2lf\n", valor);

    return 0;
}
