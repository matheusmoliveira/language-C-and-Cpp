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
		printf("A vari�vel a = 5");
	}

	if(b == 2.5){
		printf("\nA vari�vel b = 2.5");
	}
	
	if(c == c){
		printf("\nA vari�vel c = letra c");
	}
		
	//N�mero par ou impar
	if(a % 2 == 1){
		printf("\nA vari�vel a � impar");
	}else{
		printf("\nA vari�vel a � par");
	}
	
	//Condicional Composta
	if(opcao == 1){
		printf("\nOp��o = 1");
	}else if(opcao == 2){
		printf("\nOp��o = 2");
	}else{
		printf("\nOp��o Inv�lida!");
	}
	
	//Condicional Simples - apenas com if
	//Condicional Composta - com if, else e else if
}
