/**7.	Fazer um programa para que o usuário digite uma palavra que tenha
a quantidade de caracteres ímpares. Se for par, exibir mensagem de erro e retornar para nova digitação**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
char palavra[20];
int  tam=0;
      
      palaini: 
      puts("Digite uma palavra:  ");
      gets(palavra);       
      
tam = strlen (palavra);

 if (tam%2==0){
puts("Error Digite novamente");
goto palaini;}


  printf("A Palavra: %s e IMPAR e contem %i caracteres\n",palavra,tam);             
system("pause");}
 
       
