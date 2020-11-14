#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");

	/*Crie um algoritmo que leia 3 notas e calcule a média entre elas.
	Se o valor for maior que 7 informe que o aluno foi aprovado.
	senão foi reprovado.*/

	float nota1, nota2, nota3, media;

	printf("Digite o valor da 1ª nota: ");
	scanf("%f", &nota1);
	printf("Digite o valor da 2ª nota: ");
	scanf("%f", &nota2);
	printf("Digite o valor da 2ª nota: ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("A média do aluno foi: %.2f", media);

	if(media >= 7){
        printf("\nAluno foi Aprovado! Parabéns!!!");
	}else{
        printf("\nAluno foi reprovado!");
	}
}
