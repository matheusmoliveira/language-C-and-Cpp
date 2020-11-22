#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

//Função principal do programa
void main(){

    //Para usar acentos
    setlocale(LC_ALL, "Portuguese");

    //Definindo Variáveis
    int i;

    for (i = 1; i <= TAM; i++){
        printf("%d\n", i);
    }


}
