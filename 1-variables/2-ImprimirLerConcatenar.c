#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"");
	
	//Definindo uma variável
	int a = 5, b;
	
	//Imprimindo a variável "a"
	printf("O valor da var a é: %d", a);
	
	//Mudando o valor de "a"
	a = 15;
	
	//Concatenando
	printf("\nO valor da var a é: %d\n", a);
	
	//Lendo valores
	scanf("%d", &b);
	
	//Imprimindo a variável "b"
	printf("O valor da var b é: %d\n", b);
	
	//Pausando
	system("pause");
}
