#include <stdio.h>
#include <stdlib.h>

void impar(int x){
	int i;

	for(i = 0; i < 12; i++){
		x++;
		if(x % 2 != 0)
			printf("%d\n", x);
	}
}

int main(void){
	int quant;
	scanf("%d", &quant);
	impar(quant);

	return 0;
}