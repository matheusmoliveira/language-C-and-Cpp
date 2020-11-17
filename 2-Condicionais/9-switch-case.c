#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Para usar acentos
    setlocale(LC_ALL, "Portuguese");
    
    
    //Definindo variáveis
    int a = 1;
    char b = 'x';
    
    //Código de exemplo com if
    if (a == 1){
    	printf("Opção escolhida: 1");
	}else if ( a == 2){
		printf("Opção escolhida: 2");
	}else if ( a == 3){
		printf("Opção escolhida: 3");
	}else{
		printf("Opção Inválida!");
	}
    
    //O mesmo código de cima, adaptado ao Switch
    switch(a){
    	case 1:
    		printf("\nOpção escolhida: 1");
    		break;
    	case 2:
    		printf("\nOpção escolhida: 2");
    		break;
    	case 3:
    		printf("\nOpção escolhida: 3");
    		break;
    	default:
    		printf("\nOpção Inválida!");
    		break;
	}
    
    //Switch com Char
    switch(b){
    	case 'x':{
    		printf("\nOpção escolhida: X");
			break;
		default:
			printf("\nOpção Inválida!");
			break;
		}
	}
    
}
