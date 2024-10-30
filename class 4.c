//String
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	char name[10];
	char word[10];
	
	printf("Digite seu nome:");
	scanf("%s", &name);
	
	printf("Digite uma palavra:");
	scanf("%s", &word);
	

	strcpy(word, name);
	
	printf("Seu nome é: %c\n", name);
	printf("A palavra é: %s", word);
	
	system("Pause");
	return 0;
	
}