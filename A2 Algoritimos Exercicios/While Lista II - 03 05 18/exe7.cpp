/**
7.	Fazer um programa para que o usuário digite uma palavra de até 12 posições. 
Caso a palavra tenha mais do que 12 caracteres, mensagem de erro e retorna para nova digitação.
O programa deverá apenas imprimir os caracteres com índice de valor ímpar.**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
char palavra[11];
int i=0, tam=0;
         
inicio:         
         puts("Digite uma palavra de até 12 caracteres:  ");
              gets(palavra);     
         tam = strlen(palavra);
                      if(tam>12){
                           puts("\n\nErro a palavra deve conter no maximo 12 caracteres!!");
goto inicio;
}                                                                

           while(i <= tam){
			
			printf("\n%c", palavra[i]);
			i += 2;
			
		}
     puts ("\n");
system("pause");}
