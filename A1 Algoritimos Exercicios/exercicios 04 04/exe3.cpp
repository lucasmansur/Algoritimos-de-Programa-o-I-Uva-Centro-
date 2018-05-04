/*3) Faça um programa que pergunte a mesada de um adolescente, após
isto pergunte se ele quer comprar algum produto, caso ele responda
“não”, o programa irá imprimir uma mensagem mostrando qual o valor
da mesada dele, caso responda “sim” o programa irá pergunta qual o
valor do produto e irá mostrar na tela o saldo final dele (deduzir a mesada
do valor do produto). O valor do produto não pode ser maior que o valor
da mesada.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main(){setlocale(LC_ALL,"Portuguese");
float mesada=0,produto=0,saldo=0;
char res[10];

inimesada:
printf("mesada aqui\n");
scanf("%f",&mesada);
if(mesada<=0){
printf("nao pode menor zero\n");
goto inimesada;}
else

printf("quer comprar algo ?\nResponda com 'sim' ou 'nao'\n");
scanf("%s",&res);

if (strcmp(res,"nao")==0){
   printf("Valor da mesada: R$ %.2f");
   
}else if (strcmp(res,"sim")==0){
      printf("Informe o Valor do produto: R$");
      scanf("%f",&produto);
      

if (produto>mesada){
   printf("saldo insuficiente!\n");
   
}else
      saldo = mesada - produto;
      printf("Saldo atual é R$%.2f\n",saldo); 
}


system("pause");}
