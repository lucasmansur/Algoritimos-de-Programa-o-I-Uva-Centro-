/**8.	O programa deverá exibir o caractere do meio da palavra digitada.
Para isso só poderá ser aceiro palavras com números ímpares de caracteres.**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


main(){
char palavra[19];
int  tam=0,meio=0;
      
      palaini: 
      puts("Digite uma palavra:  ");
      gets(palavra);       
      
tam = strlen (palavra);

 if (tam%2==0 || tam>19){
     puts("\n\nError a palavra deve ser impar e ou conter no maximo 20 caracteres\n\t\tDIGITE NOVAMENTE!!!\n");
     goto palaini;}

meio = tam/2;

printf("\n\no caracter do meio desta palavra e : %c\n\n",palavra[meio]);


         
system("pause");}
