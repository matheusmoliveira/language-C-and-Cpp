#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Para usar acentos
    setlocale(LC_ALL, "Portuguese");

	/*
	Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case) de 4 opções:
	1-Soma, 2-subtrair, 3-Dividir,4-Multiplicar. Depois que o usuário escolher uma opção, mostre o
	rescultado da opração escolhida com os dois valores lidos.
	*/
	
	int valorA, valorB, resultado;
	
	printf("==================================\n");
	printf("      Calculadora com Menu\n");
	printf("==================================\n");
	printf("\nDigite o valor A: ");
	scanf("%d", &valorA);
	printf("Digite o valor B: ");
	scanf("%d", &valorB);
	
	printf("\n1-Soma");
	printf("\n2-Subtrair");
	printf("\n3-Dividir");
	printf("\n4-Multiplicar");
	printf("\n\nEscolha uma opção: ");
	scanf("%d", &resultado);
	
	switch(resultado){
		case 1:
			printf("%d + %d = %d", valorA, valorB, valorA + valorB);
				break;
		case 2:
			printf("%d - %d = %d", valorA, valorB, valorA - valorB);
				break;
		case 3:
			printf("%d / %d = %d", valorA, valorB, valorA / valorB);
				break;
		case 4:
			printf("%d * %d = %d", valorA, valorB, valorA * valorB);
				break;
		default:
			printf("Digite uma opção válida!");
				break;
	}

}
