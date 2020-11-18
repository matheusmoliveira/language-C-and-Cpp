#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
	int a = 20, b = 20;

	//Contando até 10
	do{

		//Imprimindo 'a' na tela
		printf("%d\n", a);

		//Incremento
		a++;	//a = a + 1;

	}while(a <= 10);

	//Contagem Regressiva
	do {

		//Imprimindo 'b' na tela
		printf("%d\n", b);

		//decremento
		b--;	//b = b - 1;

	}while(b >= 1);

	//Pausa o programa após executar
	system("pause");
}
