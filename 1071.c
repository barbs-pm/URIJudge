#include <stdio.h>
#include <stdlib.h>

void impar(int a, int b){
	int i, soma=0;

	if(b > a){
		for(i = a + 1; i < b; i++){
			if(i % 2 != 0)
				soma += i;
		}
	}
	else
		for(i = b + 1; i < a; i++){
			if(i % 2 != 0){
				soma += i;
			}
		}

	printf("%d\n", soma);
}

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	impar(a, b);

	return 0;
}