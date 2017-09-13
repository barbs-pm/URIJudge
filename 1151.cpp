#include<stdio.h>

int main (void) {
  int num, i=1, a=1, b=1, aux=0; // valores para iniciar a sequencia
 
  scanf("%d", &num);
  printf("0 1 1");
  num -= 3; // para n adicionar no while o 0 1 1

  while (i <= num) {
    aux = a + b;
    printf(" %d", aux);
    b = a;
    a = aux;;
    i++;
  }
  printf("\n");

  return 0;
}