#include <stdio.h>

int main (void){
	int qnt, num, i, controle=0, aux=0;
	scanf("%d", &qnt);
	
	for(i = 0; i = qnt; i++){
		scanf("%d", &num);

		if(num >=1 && num <= 100){
			for(i = 1; i <= num; i++){
				if (num % i == 0){
					controle ++;
				}
			}
			if(controle == 2){
				printf("%d eh primo\n", num);
			} 
			if(controle != 2){
				printf("%d nao eh primo\n", num );
			}
		}

	}
	return 0;
}