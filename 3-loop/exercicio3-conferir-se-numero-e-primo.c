#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

    //Para usar acentos
    setlocale(LC_ALL, "Portuguese");

    //Crie um algoritmo que informe se o valor lido é primo ou não

    int num, i, resultado = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0){
        resultado++;
        }
    }

    if (resultado == 0)
    printf("%d é um número primo\n", num);
    else
    printf("%d não é um número primo\n", num);

}
