#include<stdio.h>

int main() {
  int a, b, c;

  scanf("%d %d %d", &a, &b, &c);
  
  if(b > a) { //verifica se subiu do primeiro pro segundo dia
    if(c <= b) { //caso 2
      printf(":(\n");
    } else { //caso 3 ou 4
      if((b-a)>(c-b)) { //caso 3
	printf(":(\n");
      } else { //caso 4
	printf(":)\n");
      }
    }
  } else if(b < a) { //verifica se desceu do primeiro pro segundo dia
    if(c >= b) { //caso 1
      printf(":)\n");
    } else { //caso 5 ou 6
      if((a-b)>(b-c)) { //caso 5
	printf(":)\n");
      } else { //caso 6
	printf(":(\n");
      }
    }
  } else { //caso 7 ou 8
    if(c > b) { //caso 7
      printf(":)\n");
    } else { //caso 8
      printf(":(\n");
    }
  }
  return 0;
}
