#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Permite usar acentos
	setlocale (LC_ALL,"");
	
	//Imprime Ol�
	printf("Ol� \n");
	
	//Lendo valor inteiro
	int a = 50;
	printf("O valor de a � = %d \n", a);
	scanf("%d", &a);
	printf("O valor de a mudou para %d ", a);
	
	//Lendo valor quebrado
	float b = 5.5;
	printf("O valor de b � = %.2f \n", b);
	scanf("%f", &b);
	printf("O valor de b mudou para %.2f ", b);
	
	//Lendo uma letra
	char c = 'X';
	printf("O valor de c � = %c \n", c);
	fflush(stdin);
	scanf("%c", &c);
	printf("O valor de c mudou para %c ", c);
}
