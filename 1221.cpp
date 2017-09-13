#include <stdio.h>

int main(){
    int numero, i, j, teste[200];
    
    scanf("%d", &numero);
    
    for(i = 0; i < numero; i++){
        scanf("%d", &teste[i]); 
        for(j = teste[i] - 1; j >= 1; j++){
            if(teste[i] % j == 0){
                printf("Not Prime\n");
            } else if(j == 1){
                printf("Prime\n");
            }
    }
    }
    
    return 0;
}
