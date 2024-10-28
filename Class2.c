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
		bool ativo = false;
		int i;
		
		for(int i = 0; i <= 10; i++){
			printf("%d\n",i);
		}
		
		while(!ativo){
			printf("Olá, você está ativo");
			ativo = true;
		}
}