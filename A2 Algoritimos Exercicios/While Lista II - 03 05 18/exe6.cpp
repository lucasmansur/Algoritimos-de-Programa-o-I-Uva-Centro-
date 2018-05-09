/**6.	Fazer um programa que pergunta um número ao usuário,
e mostra sua tabuada completa (de 1 até 10).
O número digitado não pode ser zero. Caso seja,
mensagem de erro e retorna para nova digitação.**/

#include<stdio.h>
#include<stdlib.h>
main(){
       
      int num=0,i=0,muti=0;
      
printf("Digite um numero:  ");       
scanf("%d",&num);


while (i<10){
i++;
muti = num*i;
printf("\t%d x %d = %d\n",num,i,muti);      
      }
       
system("pause");}
