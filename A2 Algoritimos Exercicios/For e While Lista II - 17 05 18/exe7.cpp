/*7) Escrever um nome e escrevê-lo de trás pra frente.*/


#include<stdio.h>
#include<string.h>
main() {


	char nome[10];
	int i=0,x=0;
	
	puts("\tDigite um nome:  \n\n");
	gets(nome);
	
	i= strlen(nome);
	
		printf("\n\nDigitou o seguinte nome:  %s\n\n",nome);
	
	for(i=i-1;i>=0;i--){
		
			printf("%c",nome[i]);
		
	}
	


}
