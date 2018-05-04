/*5) Fazer um programa para que o usuário possa inserir três números.
A nova função a ser criada deverá retornar o menor valor.
Os números informados não podem ser iguais.
Fazer verificação, aplicar mensagem de erro e retornar para nova digitação caso os valores sejam iguais.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int avalianumero (int x1,int x2,int x3){
     int menor=0;
     if ((x1<x2)&&(x1<x3)){
           menor= x1;
           }else 
           if ((x2<x1)&&(x2<x3)){
           menor= x2;
           }else 
           menor  = x3;
           
           printf("O menor numere dentre os digitados é %d\n",menor);
           
     }


int main(){setlocale(LC_ALL,"Portuguese");
int n1=0, n2=0, n3=0;
inicio1:
 printf("Informe o primeiro numero: ");
scanf("%d",&n1);

printf("Informe o segundo numero: ");
scanf("%d",&n2);

printf("Informe o terceiro numero: ");
scanf("%d",&n3);
if((n1==n2)||(n1==n3)||(n2==n3)||(n3==n1)||(n3==n2)){
printf("ERROR!!!!\n\n\n");
goto inicio1;}
avalianumero (n1, n2, n3);


system("pause");
return 0;}  
