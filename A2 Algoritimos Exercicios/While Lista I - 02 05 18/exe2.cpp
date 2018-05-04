/** 2.	Fazer um programa para que o usuário possa digitar umapalavra e imprimir as 4 últimas letras da palavra **/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main (){
char palavra[10];      
int i=0,num=0;
puts("Digite uma Palavra")     ;
gets(palavra);

num = strlen (palavra);

while (i<5){
printf("%c",palavra[num]);
num --;
i++;}     


system("pause");}
