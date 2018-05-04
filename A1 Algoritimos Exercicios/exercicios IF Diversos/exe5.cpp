/*5) Faça um programa para que o usuário digite três palavras,
concatene as três e exiba a informação concatenada.*/

#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){setlocale(LC_ALL, "Portuguese");
char pala1[30],pala2[30],pala3[30];

    printf("Digite uma  palavra:  ");
    gets(pala1);
    printf("Digite uma  palavra:  ");
    gets(pala2);
    printf("Digite uma  palavra:  ");
    gets(pala3);

strcat(pala1,pala2);
strcat(pala1,pala3);
printf("%s",pala1);

system("pause");}
