#include <math.h>
#include <stdio.h>

int main (void){
    float a, b, c, d, e, f, qntpositivos=0, num=0;
    scanf ("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);

    if (a > 0){
        qntpositivos = qntpositivos +1;
        num = num+a;
    }
    if(b > 0){
        qntpositivos = qntpositivos +1;
        num = num+b;
    }
    if (c > 0){
        qntpositivos = qntpositivos +1;
        num = num+c;
    }
    if (d > 0){
        qntpositivos = qntpositivos +1;
        num = num+d;
    }if (e > 0){
        qntpositivos = qntpositivos +1;
        num = num+e;
    }
    if (f > 0){
        qntpositivos = qntpositivos +1;
        num = num+f;
    }

    printf("%.0f valores positivos\n%.1f\n", qntpositivos, num/qntpositivos);


    return 0;
}
