/*2)Receber um nome no teclado e imprimir quantas letras "a" ou"A" tem o nome.*/


#include<stdio.h>
#include<string.h>


main() {
	int i=0,tam=0,letra=0;
	char nome[30];


	puts("Digite um nome: ");
	gets(nome);

	tam = strlen(nome);

	for(i=0; i<=tam-1; i++) {
		if(nome[i]== 'a'|| nome[i]=='A') 
			letra++;
		

	}

	printf("Existem %d Letra ''A'' nesta palavra",letra);

}
