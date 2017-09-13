#include <stdio.h>
#include <stdlib.h>
#define max 20
#define min 10

int main(void){
	int op, teste, out=0, in=0, i;
	scanf("%d", &op);

	for(i = 0; i < op; i++){
		scanf("%d", &teste);
		if(teste > max || teste < min)
			out++;
		else in++;
	}
	printf("%d in\n%d out\n", in, out);

	return 0;
}