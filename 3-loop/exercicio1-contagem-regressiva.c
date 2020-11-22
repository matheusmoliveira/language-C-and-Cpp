#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

    //Para usar acentos
    setlocale(LC_ALL, "Portuguese");

    /*Crie um algoritmo que imprima os número de 10 até 0
    de forma regressiva. (usando While, Do While e FOR).*/

    //Definindo variáveis
    int cont = 10, i = 1;

    //Contagem regressiva usando While
    while (cont >= i){
        printf("%d\n", cont);

        cont --;
    }

    cont = 10, i = 1;

    //Contagem regressiva usando DO While
    do {
        printf("\n%d", cont);

        cont --;

    }while (cont >= i);

    cont = 10, i = 1;

    //Contagem regressiva usando FOR
    for (cont = 10; cont >= i; cont--){
        printf("\n%d", cont);
    }
}
