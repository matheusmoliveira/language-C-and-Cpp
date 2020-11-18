#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){

    //Para usar acentos
    setlocale(LC_ALL, "Portuguese");

    //Definindo Variáveis
    int opcao;

    while(opcao < 1 || opcao > 3){

        printf("MENU\n");
        printf("1-Opção\n");
        printf("2-Opção\n");
        printf("3-Opção\n");
        printf("Digite uma opção: ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Opção 1 foi escolhida!");
                break;
            case 2:
                printf("Opção 2 foi escolhida!");
                break;
            case 3:
                printf("Opção 3 foi escolhida!");
                break;
            default:
                printf("Opção inválida, escolha uma opção válida!\n\n");
                break;
        }

    }

}
