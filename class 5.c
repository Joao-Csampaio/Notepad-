//String
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
	
	char letter = 'a'
	
	char origem[10] = "Origem";
	char destino[10] = "Destino";
	
	printf("%c\n", letter);
	printf("%s\n", origem);
	printf("%s\n", destino);
	
	strcpy(destino, origem);
	
	if(strcmp(origem, "Origem") == 0){
		printf("O conteúdo é igual.");
	}else{
		printf("O conteúdo não é igual.");
	}
	
	printf("%s\n", origem);
	prinft("%s\n", destino);
	
	system("Pause");
	return 0;
}