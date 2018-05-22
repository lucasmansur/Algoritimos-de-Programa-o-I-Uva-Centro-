/**3 - Fazer um programa para que o usuário digite um nome e exiba na tela apenas as letras que se encontram na posição par.**/


#include<stdio.h>
#include<string.h>
main(){
	char nome[10];
	int i=0,tam=0;
	
	puts("Digite o nome aqui:  ");
	fflush(stdin);
	gets(nome);
	
	tam = strlen(nome);
	 for (i=0;i<=tam-1;i++){
	 	if(i%2==0){
	 		printf("%c",nome[i]);
	 		puts("\n");
		 }
		 
	 	
	 }
	 
	
	
	
}
