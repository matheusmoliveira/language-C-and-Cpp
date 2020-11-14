#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");
	
	//Exercício 1 - Crie um algoritmo que leia 2 notas e mostrea a média entre elas.
	
	float nota1, nota2, resultado1, notaa, notab, resultado2;
	int a, b, c, resultado3;
	
	printf("Digite a 1ª nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2ª nota: ");
	scanf("%f", &nota2);
	resultado1 = (nota1 + nota2) / 2;
	printf("A média da sua nota é: %.1f\n", resultado1);
	
	//Exercício 2 - Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferença entre elas.
	
	printf("Digite a 1ª nota: ");
	scanf("%f", &notaa);
	printf("Digite a 2ª nota: ");
	scanf("%f", &notab);
	resultado2 = notaa - notab;
	printf("A média da sua nota é: %.1f\n", fabs(-resultado2));
	
	//abs - se usa para números inteiros (int)
	//fabs - se usa para número quebrados (float)
	
	/*Exercícios 3 - Crie um algoritmo que leia 3 números inteiros de uma só vez e
	coloque os resultados da multiplicação entre os 3 em uma variável própria,
	depois exiba essa variável.*/
	
	printf("Digite os valores de A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	resultado3 = a * b * c;
	printf("A multiplicação dos valores de %d, %d e %d é = %d\n", a, b, c, resultado3);
	
	
	system ("pause");
}
