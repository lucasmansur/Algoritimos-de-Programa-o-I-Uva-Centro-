/*1) Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.*/

#include<stdio.h>
#include<string.h>

main() {
	int i,tam;
	char nome[30];
	
	printf("Digite um nome: ");
	gets(nome);
	
	tam = strlen(nome);
	
	for (i=1; i <= tam; i++) {
		printf("\n%s",nome);
		printf("\n\n");
	}
}



