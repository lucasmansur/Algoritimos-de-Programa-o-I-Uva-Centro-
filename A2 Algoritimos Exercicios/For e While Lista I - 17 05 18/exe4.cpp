/*4 - Fazer um programa para digitar um nome e
exibi-lo tantas vezes quantos forem seus caracteres.
Exemplo: um nome com 8 letras, terá a aparição do nome 8 vezes na tela.*/

#include<stdio.h>
#include<string.h>

main() {
int i=0,tam=0;
char nome [20];

	puts("Digite o nome aqui:  ");
	fflush(stdin);
	gets(nome);

	tam = strlen(nome);
	for (i=0; i<=tam-1; i++) {
		printf("%s\n",nome);
	}


}

