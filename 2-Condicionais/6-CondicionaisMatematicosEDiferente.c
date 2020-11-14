#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

	//Permite usar acentos
	setlocale (LC_ALL,"Portuguese");


	//Definindo variáveis
	int a = 5, b = 10, c = 15;
	char d = 'x';

	//Maior
	if (a > 2){
        printf("%d é maior que 2\n", a);
	}

	//Maior ou igual
	if (c >= b){
        printf("%d é maior ou igual a %d\n", c, b);
	}

	//Menor
	if (a < 10){
        printf("%d é menor que 10\n", a);
	}

	//Menor ou igual
	if (a <= b){
        printf("%d é menor ou igual a %d\n", a, b);
	}

	//Diferente
	if (a != b){
        printf("%d não é %d\n", a, b);
	}

	//Diferente com letra
	if (d != a){
        printf("%c nao é a\n", d);
	}

	//Pausa o programa após executar
	//system("pause");
}
