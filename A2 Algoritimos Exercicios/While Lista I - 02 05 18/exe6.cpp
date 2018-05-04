/**6.	Escrever um programa que receba um nome para que conte o número de vogais existentes nele.
O programa deverá imprimir o número total de caracteres do nome, quantas vogais e a 
respectiva porcentagem das vogais em relação ao total de caracteres.**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



main(){
float perc=0;
int i=0,num=0,vog=0; 
char nome[19];
       
puts("escreva o nome:  ");
gets(nome);       
num = strlen (nome);



while(i <= num){
if((nome[i] == 'a') || (nome[i] == 'e') || (nome[i] == 'i') || (nome[i] == 'o') || (nome[i] == 'u')){

printf("%c\n", nome[i]);
vog++;
}
i++;}

printf("Quantidade de vogais:  %i\nQuantidade de Caracteres:  %i\n\n\n",vog,num);

perc = (vog / num)*100;

printf("Porcentagem de Vogais :  %f\n\n",perc);

      
system("pause");}
