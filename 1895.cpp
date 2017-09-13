#include <stdio.h>
#include <math.h>
 
int main(void) {

	int num, t, l, s, c, bob=0, alice=0;
	scanf("%d %d %d", &num, &t, &l);


	if(num >= 1 && num < 60 && num % 2 != 0 &&
	 t >= 1 && t <= num && 1 <= l && l <= 10){
		
		for(c = 0; c < num - 1; c++){
		    scanf("%d", &s);	
			if((t - s) <= l){
				if(c % 2 == 0){
					alice = alice + (t-s);
				} else
					bob = bob + (t-s);
			t = s;
			}
		}
	}
	
	printf("%d %d\n", alice, bob);
		
	 
	    return 0;
	}
