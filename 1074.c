#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, num;
	double a, b, c, media;
	scanf("%d", &num);

	for(i = 0; i < num; i++){
		scanf("%lf %lf %lf", &a, &b, &c);
		media = (a*2 + b*3 + c*5)/10;
		printf("%.1lf\n", media);
	}

	return 0;
}