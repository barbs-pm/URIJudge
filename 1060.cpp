#include <stdio.h>

int main (void){
	double num[6], contador=0;
	int i;
	
	for(i = 0; i < 6; i++){
		scanf("%lf", &num[i]);
		 if(num[i] > 0 && num[i] != 0){
			contador++;
		}
	}

	printf("%.0lf valores positivos\n", contador);
	
	return 0;
}