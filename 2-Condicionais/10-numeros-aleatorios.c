#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void main(){
	
	//Para usar acentos
    setlocale(LC_ALL, "Portuguese");
	
	//Respons�vel por alimentar o rand de forma diferente
	srand( (unsigned) time(NULL));
	
	//Vari�vel que recebe o resto da divis�o do n�mero por 3 (aleatorio entre 0 e 2)
	int aleatorio = rand() % 3;
	
	//Vari�vel que recebe o resto da divis�o do n�mero por 5 (aleatorio entre 1 e 5)
	int aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf("%d", aleatorioSegundo);
	
	aleatorioSegundo = (rand() % 5) + 1;
	
	//Imprime o valor
	printf("%d", aleatorioSegundo);
	
	//Para usar acentos
    setlocale(LC_ALL, "Portuguese");

}
