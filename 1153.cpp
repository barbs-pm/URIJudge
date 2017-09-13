#include <stdio.h>

int main (void){
	int fat=1, n;

	scanf("%d", &n);

	for( ; n >= 1; n--){
		fat *= n;
	}

	printf("%d\n", fat);

	return 0;
}