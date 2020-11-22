#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

    //Para usar acentos
    setlocale(LC_ALL, "Portuguese");

    /*Crie um algoritmo que imprima os números pares
    de 10 a 20. (usando While, Do While e FOR).*/

    //Definindo variáveis
    int cont = 10;

    while (cont <=20) {
        if (cont % 2 == 0){
            printf("%d - par\n", cont);
        }else{
            printf("%d - impar\n", cont);
        }
    cont++;
    }

    cont = 10;

    do {
        if (cont % 2 == 0){
            printf("%d - par\n", cont);
        }else{
            printf("%d - impar\n", cont);
        }
    cont++;
    } while (cont <=20);

    for (cont = 10; cont <= 20; cont++){
        if (cont % 2 == 0){
            printf("%d - par\n", cont);
        }else{
            printf("%d - impar\n", cont);
        }
    }
}
