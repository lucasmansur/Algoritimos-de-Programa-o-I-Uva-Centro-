/*Fazer um programa para que o usurário posso informar dois
números inteiros e soma-los. Se a soma for maior que 10, mostrar o
resultado da soma.*/

#include <stdio.h>
#include <stdlib.h>

main(){
int x=0,y=0,s=0;       

printf("Digite o primeiro numero:  ");
scanf("%d",&x);       

printf("Digite o segundo numero:  ");
scanf("%d",&y);

s = x+y;

if (s>10)
printf("O resultado da soma e :  %d\n\n\n\n",s);

else
printf ("A soma dos Numeros nao e maior que 10\n\n\n\n");


system("pause");








       }
