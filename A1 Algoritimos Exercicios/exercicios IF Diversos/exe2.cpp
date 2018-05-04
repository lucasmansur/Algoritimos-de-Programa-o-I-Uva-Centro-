/*2) Faça um programa para que o usuário digite uma palavra e exiba
quantos caracteres tem a palavra, depois concatene essa palavra
com a palavra “lindo” e exiba o conteúdo final da concatenação.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
int tam;
char nome[30];

printf("Entre com um nome:  ");
gets (nome);
tam= strlen(nome);
printf("O nome digitado tem exatos %d Caracteres\n\n",tam);
strcat(nome," lindo\n\n");
printf("%s",nome);


system("pause");
}

