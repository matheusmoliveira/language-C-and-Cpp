#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");

	bool a = true, b = false;

    //Se a for verdadeiro
	if(a){
        printf("a é verdadeiro\n");
	}

	//Comparando o b
	if(b){
        printf("b é verdadeiro\n");
	}else{
        printf("b é falso\n");
	}

	//Comparando uma falsidade
	if(!b){
        printf("b é falso");
	}

}
