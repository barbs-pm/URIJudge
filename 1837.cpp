#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main (void){
    int a, b, q, r;

    scanf("%d %d", &a, &b);

    q = (int) ceil((double)a / b);
    if(b > 0){
        q = (int) floor((double)a / b);
    }

    r = abs(a - q * b);

    printf("%d %d\n", q, r);

    return 0;
}
