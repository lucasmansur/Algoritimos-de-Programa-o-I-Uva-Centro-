/**3.	Fazer um programa para que o usuário possa digitar um nome e o programa deverá exibir a letra e a respectiva posição**/

#include<stdio.h>
#include<stdlib.h>

main(){
int i=0, num=0;
char palavra [10];

puts("Digite uma palavra:  ");
gets(palavra);

while (i>=0&&i<5){
  printf("A posicao: %i\nCarrega a letra: %c \n\n",i,palavra[i]);           
 i++;
}

system("pause");}
