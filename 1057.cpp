#include <stdio.h>
#include <math.h>

int main (){
	int saida, tempo, fuso, hora;
	scanf("%d %d %d", &saida, &tempo, &fuso);

	hora = saida + tempo + fuso;
	
	if(hora >= 24){
		hora -= 24;
	}
	else if(hora < 0){
		hora += 24;
	}

	printf("%d\n", hora);

	return 0;
}