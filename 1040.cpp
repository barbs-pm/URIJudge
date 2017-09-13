#include <stdio.h>

int main (void){
	double n1, n2, n3, n4, media, n_exame, aux;
	scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

	media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

	if(media >= 7.0)
		printf("Media: %.1lf\nAluno aprovado.\n", media);

	else if(media < 5.0)
		printf("Media: %.1lf\nAluno reprovado.\n", media);

	else if(media < 6.9 || media > 5.0){
		scanf("%lf", &n_exame);
		aux = (media + n_exame) / 2;
		if(aux >= 5){
			printf("Media: %.1lf\nAluno em exame.\n", media);
			printf("Nota do exame: %.1lf\n", n_exame);
			printf("Aluno aprovado.\nMedia final: %.1lf\n", aux);
		}else if(aux <= 4.9){
			printf("Media: %.1lf\nAluno em exame.\n", media);
			printf("Nota do exame: %.1lf\n", n_exame);
			printf("Aluno reprovado.\nMedia final: %.1lf\n", aux);
		}
	}


	return 0;
}
