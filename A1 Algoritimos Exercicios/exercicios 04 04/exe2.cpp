/*2) Uma empresa abriu uma linha de crédito para os funcionários. O valor
da prestação não pode ultrapassar 30% do salário. Faça um programa
que receba o salário, o valor do empréstimo e o número de prestações e
informe se o empréstimo pode ser concedido. Nenhum dos valores
informados pode ser zero ou negativo. Caso aconteça, mensagem de erro
e retornar para nova digitação daquela informação.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main(){setlocale(LC_ALL,"Portuguese");
int salario=0,empres=0,npres=0,rest=0,limite=0;

inisalario:
printf("salario aqui\n");
scanf("%d",&salario);
if(salario<=0){
printf("nao pode menor zero\n");
goto inisalario;}
else

iniempres:
printf("emprestimo aqui\n");
scanf("%d",&empres);
if(empres<=0){
printf("nao pode menor zero\n");
goto iniempres;}
else

ininpres:
printf("numero de prestações aqui\n");
scanf("%d",&npres);
if(npres<=0){
printf("nao pode menor zero\n");
goto ininpres;}
else

rest = empres / npres;

if(rest>0.3*salario)
printf("não foi aprovado");
else
printf("foi aprovado");



return 0;}
