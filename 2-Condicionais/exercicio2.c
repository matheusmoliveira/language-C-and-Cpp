#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Para usar acentos
    setlocale(LC_ALL, "");

    /*Crie um algoritmo que leia 3 valores e informe se eles são
    igual entre si para formarem os lados de um triângulo equilátero.*/

    int ladoA, ladoB, ladoC;

    printf("Digite o valor do lado A: ");
    scanf("%d", &ladoA);
    printf("Digite o valor do lado B: ");
    scanf("%d", &ladoB);
    printf("Digite o valor do lado C: ");
    scanf("%d", &ladoC);

    //Analisa se é equilátero
    if (ladoA == ladoB && ladoB == ladoC){
            printf("O triângulo é equilátero");
        }else{
            //Analisa se existem pelo menos dois lados iguais
        if ( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA) ){
            printf("O triângulo é isósceles");
        }else{
            printf("O triângulo é escaleno");
        }

        }
}
