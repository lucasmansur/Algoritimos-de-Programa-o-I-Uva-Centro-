/** 1.	Fazer um programa para que o usuário possa digitar umapalavra e imprimir as 4 primeiras letras da palavra. **/


#include<stdio.h>
#include<stdlib.h>

main (){
char palavra [10];
int i=0; 
puts("Digite uma palavra") ;
gets(palavra);

while (i<4){
printf("%c",palavra[i]);
i++;
}
 
 
     
system("pause");}
