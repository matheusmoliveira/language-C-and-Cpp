#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");
	
	//Exerc�cio 1 - Crie um algoritmo que leia 2 notas e mostrea a m�dia entre elas.
	
	float nota1, nota2, resultado1, notaa, notab, resultado2;
	int a, b, c, resultado3;
	
	printf("Digite a 1� nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2� nota: ");
	scanf("%f", &nota2);
	resultado1 = (nota1 + nota2) / 2;
	printf("A m�dia da sua nota �: %.1f\n", resultado1);
	
	//Exerc�cio 2 - Crie um algoritmo que leia 2 notas e mostre o valor absoluto da diferen�a entre elas.
	
	printf("Digite a 1� nota: ");
	scanf("%f", &notaa);
	printf("Digite a 2� nota: ");
	scanf("%f", &notab);
	resultado2 = notaa - notab;
	printf("A m�dia da sua nota �: %.1f\n", fabs(-resultado2));
	
	//abs - se usa para n�meros inteiros (int)
	//fabs - se usa para n�mero quebrados (float)
	
	/*Exerc�cios 3 - Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez e
	coloque os resultados da multiplica��o entre os 3 em uma vari�vel pr�pria,
	depois exiba essa vari�vel.*/
	
	printf("Digite os valores de A, B e C: ");
	scanf("%d %d %d", &a, &b, &c);
	resultado3 = a * b * c;
	printf("A multiplica��o dos valores de %d, %d e %d � = %d\n", a, b, c, resultado3);
	
	
	system ("pause");
}
