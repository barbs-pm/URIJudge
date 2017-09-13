#include <stdio.h>

int main(void){

    int i;
    float s=0;

    for(i=1;i<=100; i++){
        s += 1.0/i;
    }

    printf("%.2f\n",s);

    return 0;
}