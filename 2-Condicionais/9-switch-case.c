#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	//Para usar acentos
    setlocale(LC_ALL, "Portuguese");
    
    
    //Definindo vari�veis
    int a = 1;
    char b = 'x';
    
    //C�digo de exemplo com if
    if (a == 1){
    	printf("Op��o escolhida: 1");
	}else if ( a == 2){
		printf("Op��o escolhida: 2");
	}else if ( a == 3){
		printf("Op��o escolhida: 3");
	}else{
		printf("Op��o Inv�lida!");
	}
    
    //O mesmo c�digo de cima, adaptado ao Switch
    switch(a){
    	case 1:
    		printf("\nOp��o escolhida: 1");
    		break;
    	case 2:
    		printf("\nOp��o escolhida: 2");
    		break;
    	case 3:
    		printf("\nOp��o escolhida: 3");
    		break;
    	default:
    		printf("\nOp��o Inv�lida!");
    		break;
	}
    
    //Switch com Char
    switch(b){
    	case 'x':{
    		printf("\nOp��o escolhida: X");
			break;
		default:
			printf("\nOp��o Inv�lida!");
			break;
		}
	}
    
}
