/*Fazer um programa para que o usuário informe um número e se for
maior que 20 imprimir a metade desse número.*/






#include <stdio.h>
#include <stdlib.h>

main(){
int n=0,n1=0;
printf("Digite um numero:  ");
scanf("%d",&n);       
n1=n;
if(n>20)
printf("O numero %d e maior que 20 e sua metade e %d\n\n\n",n1,n=n/2);

else 
printf("O numero %d nao e maior que 20 portanto nao posso informa a sua metade.\n\n\n",n1);

system("pause");

       
       
       
       }
