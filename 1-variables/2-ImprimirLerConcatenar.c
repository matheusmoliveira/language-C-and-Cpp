#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"");
	
	//Definindo uma vari�vel
	int a = 5, b;
	
	//Imprimindo a vari�vel "a"
	printf("O valor da var a �: %d", a);
	
	//Mudando o valor de "a"
	a = 15;
	
	//Concatenando
	printf("\nO valor da var a �: %d\n", a);
	
	//Lendo valores
	scanf("%d", &b);
	
	//Imprimindo a vari�vel "b"
	printf("O valor da var b �: %d\n", b);
	
	//Pausando
	system("pause");
}
