/*4) Faça um programa para que o usuário possa digitar uma palavra.
Verifique se a palavra tem quantidade de caracteres par ou ímpar.
Exibir a quantidade de caractere.*/

#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){setlocale(LC_ALL, "Portuguese");
char pala[50];
int tam=0;
    printf("Digite uma  palavra:  ");
    gets(pala);    
tam=strlen(pala);    

if(tam%2==0)
printf("%d = Par\n",tam);

else
printf("Impar\n");



system("pause");}
