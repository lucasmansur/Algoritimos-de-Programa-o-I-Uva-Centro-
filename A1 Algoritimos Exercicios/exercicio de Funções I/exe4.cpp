/*4) Fazer um programa para criar uma função que leia cinco valores inteiros
e imprima o maior e o menor valor. As entradas de dados devem ser na função principal.*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int calculo (int n1, int n2, int n3, int n4 , int n5){
    int res=0;
    
if(n1>n2)
res = n1;
else
res = n2;

    if (n3>res)
       res = n3;
    if (n4>res)
       res=n4;
    if (n5>res)
       res=n5;
              printf("Maior numero digitado foi:   \t%d\n",res);       
if(n1<n2)
   res=n1;
else
   res=n2;
    
    if (n3<res)
       res = n3;
    if (n4<res)
       res=n4;
    if (n5<res)
       res=n5;
              printf("Menor numero digitado foi:   \t%d\n",res);     
}
main(){setlocale(LC_ALL, "Portuguese");
int n1=0,n2=0,n3=0,n4=0,n5=0;

printf("Entre com o primeiro elemento inteiro:  ");
scanf("%d",&n1);
printf("Entre com o primeiro elemento inteiro:  ");
scanf("%d",&n2);
printf("Entre com o primeiro elemento inteiro:  ");
scanf("%d",&n3);
printf("Entre com o primeiro elemento inteiro:  ");
scanf("%d",&n4);
printf("Entre com o primeiro elemento inteiro:  \n\n");
scanf("%d",&n5);
printf("=============================================\n");
calculo(n1, n2, n3, n4, n5);

system("pause");}
