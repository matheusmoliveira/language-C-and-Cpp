#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"");
	
	//Definindo vari�veis
	int a = 6, b = 4;
	
	//Soma
	printf("A soma de %d e %d = %d\n",a, b, a + b);
	
	//Subtra��o
	printf("A subtra��o de %d e %d = %d\n",a, b, a - b);
	
	//Divis�o
	printf("A multiplica��o de %d e %d = %d\n",a, b, a / b);
	
	//Multiplica��o
	printf("A subtra��o de %d e %d = %d\n",a, b, a * b);
	
	//Resto da Divis�o
	printf("O resto da divis�o de %d e %d = %d\n",a, b, a % b);
	
	//Valor Absoluto
	printf("O valor absoluto de -3 = %d \n", abs(-3));
	
	system ("pause");
}
