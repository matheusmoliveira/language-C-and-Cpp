#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");
	
	int a = 5, opcao = 2;
	float b = 2.5;
	char c = 'c';
	
	//Condicional Simples
	if(a == 5){
		printf("A variável a = 5");
	}

	if(b == 2.5){
		printf("\nA variável b = 2.5");
	}
	
	if(c == c){
		printf("\nA variável c = letra c");
	}
		
	//Número par ou impar
	if(a % 2 == 1){
		printf("\nA variável a é impar");
	}else{
		printf("\nA variável a é par");
	}
	
	//Condicional Composta
	if(opcao == 1){
		printf("\nOpção = 1");
	}else if(opcao == 2){
		printf("\nOpção = 2");
	}else{
		printf("\nOpção Inválida!");
	}
	
	//Condicional Simples - apenas com if
	//Condicional Composta - com if, else e else if
}
