#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"");
	
	//Definindo variáveis
	int a = 6, b = 4;
	
	//Soma
	printf("A soma de %d e %d = %d\n",a, b, a + b);
	
	//Subtração
	printf("A subtração de %d e %d = %d\n",a, b, a - b);
	
	//Divisão
	printf("A multiplicação de %d e %d = %d\n",a, b, a / b);
	
	//Multiplicação
	printf("A subtração de %d e %d = %d\n",a, b, a * b);
	
	//Resto da Divisão
	printf("O resto da divisão de %d e %d = %d\n",a, b, a % b);
	
	//Valor Absoluto
	printf("O valor absoluto de -3 = %d \n", abs(-3));
	
	system ("pause");
}
