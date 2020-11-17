#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");

	char letra = 'x';

	if(letra == 'x'){
        printf("a letra %c é x\n", letra);
	}

	printf("O código da letra é: %d\n", letra);
}
