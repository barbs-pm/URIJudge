#include <stdio.h>

int main (void){
	double cred_a, cred_b, cred_c;
	scanf("%lf %lf %lf", &cred_a, &cred_b, &cred_c);

	if(cred_a == cred_b + cred_c || cred_a == cred_b || cred_a == cred_c || 
		cred_b == cred_a + cred_c || cred_c == cred_b + cred_a ||
		 cred_c == cred_b){
		
		printf("S\n");
	} else {
		printf("N\n");
	}
	return 0;
}