#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //Definindo variáveis
    int a = 10;

    //Conectivo Lógico E (AND) &&, se UMA COMPARAÇÃO for FALSA, Não entra no bloco
    if(a > 5 && 15 > a){
        printf("A variável 'a' está entre 5 e 15\n");
    }

    //Conectivo Lógico OU (OR) , se UMA COMPARAÇÃO for VERDADEIRA, Já entra no bloco
    if(a > 5 || 15 < a){
        printf("A variável 'a' é maior que 5 ou 15\n");
    }

    //Misturando Conectivos
    if( (a > 5 || 15 < a) || a == 20 ){
        printf("A variável 'a' está entre 5 e 15 ou ela é 20\n");
    }

}
