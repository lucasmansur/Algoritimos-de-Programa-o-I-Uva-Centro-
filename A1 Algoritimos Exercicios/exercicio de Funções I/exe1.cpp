/*1) Fazer um programa para criar uma função que retorne um valor para identificar que tipo de número inteiro o usuário digitou.
Será necessário exibir na tela a mensagem:
Número Par, caso o usuário tenha digitado um número par na função principal;
Número Ímpar, caso o usuário tenha digitado um número ímpar na função principal;
Número Negativo, caso o usuário tenha digitado um número negativo na função principal.
Caso seja digitado um valor zero, este deve ser criticado e o programa deverá retornar para nova digitação.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int verificanumero(int n1){
if (n1 == 0){
printf("O numero %d não pode ser igual a zero\n",n1);}
else if (n1 <0){
printf("o numero %d é negativo\n",n1);}
else if (n1%2==0){
printf("o numero %d é par\n",n1);}
else
printf("o numero %d é impar\n",n1);



}                   
int main(){setlocale (LC_ALL, "Portuguese");
int n1=0;

printf("Digite um numero Inteiro:  ");
      scanf("%d",&n1);
        
n1 = verificanumero(n1);

printf("a\n");










system("pause");}


