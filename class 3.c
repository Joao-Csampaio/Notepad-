//  Comentário
/*Comentário com mais linhas
*/
// Biblioteca | Library
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Tipos primitivos
// int, float, char, bool

// Variaveis de escopo Global 
int numGlobal;


// Função | Método principal
int main(){
		// Variaveis de escopo localeconv
		float numQuebrado;
		
		// Inicializacao de variaveis de valores
		char letter = 'a';
		bool ativo = true;
		int i;
		
		for(int i = 0; i <= 10; i++){
			printf("%d\n",i);
		}
		
		while(!ativo){
			printf("Olá, você está ativo");
			ativo = false;
		}
		
		do{
			printf("Vai executar independente da condição");
		}while(ativo);
		
		if(ativo == true){
			printf("Ativo");
		}else{
			printf("Inativo");
		}
		
		int opcao;
		printf("\n Bem vindo ao sistema C");
		printf("\n 1- Cadastro");
		printf("\n 2- Login");
		printf("\n 3- Sair");
		printf("\n Digite a opcao desejada:");
		scanf("%d", opcao);
		
		switch(){
			case 1:
			break;
			case 2:
			break;
			case 3:
			break;
			default:
			printf("Erro");
		}
}