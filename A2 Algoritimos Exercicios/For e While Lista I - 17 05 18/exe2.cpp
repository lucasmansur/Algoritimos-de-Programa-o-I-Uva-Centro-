/**2 - Fazer um programa para digitar um nome com mais de 5 posições,
calcule e mostre quantas letras tem. Para que o programa seja finalizado,
basta digitar algo com menos de 4 letras**/

#include<stdio.h>
#include<string.h>

main() {
	char nome[10]	;
	int i=0,tam=0;


for (i=0;i<=4;i++){

	puts("Digite um nome com no minimo 4 caracteres");
	gets(nome);
	tam = strlen(nome);
	printf("O nome digitado tem %d - letras",tam);
	puts("\n\n");
	}

}
