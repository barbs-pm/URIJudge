#include <stdio.h>
#include <stdlib.h>

void impar(int x){
	int i;

	for(i = 1; i <= x; i++){
		if(i % 2 != 0)
			printf("%d\n", i);
	}
}

int main(void){
	int quant;
	scanf("%d", &quant);
	impar(quant);

	return 0;
}