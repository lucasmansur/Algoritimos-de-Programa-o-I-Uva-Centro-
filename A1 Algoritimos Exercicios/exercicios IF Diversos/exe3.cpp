/*3) Faça um programa para que o usuário digite uma palavra, depois
digite uma segunda palavra e verifique qual das palavras é a menor.
Exiba a menor palavra.
*/

#include<locale.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

main(){setlocale(LC_ALL, "Portuguese");
int a=0,b=0;
char pala1[30],pala2[30];
     printf("Digite a primeira primeira palavra:  \n");
     scanf("%s",pala1);
     printf("Digite a segunda palavra:  \n");
     scanf("%s",pala2);
a=strlen(pala1);     
b=strlen(pala2);
if (a<b)
printf("A Palavra %s é menor que a palavra %s\n\n\n",pala1,pala2);
else
printf("A Palavra %s é menor que a palavra %s\n\n\n",pala2,pala1);

system("pause");}     
