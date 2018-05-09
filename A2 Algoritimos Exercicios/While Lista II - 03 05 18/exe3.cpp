/**3.Fazer um programa que recebe um número inteiro qualquer e mostre
os números pares e ímpares (separados, em duas colunas), de 1 até esse número inteiro.
O número digitado não pode ser zero e nem negativo. Caso seja, mensagem de erro e retorna para nova digitação.**/

#include<stdio.h>
#include<stdlib.h>


main(){
int i=0, num=0;

ininum:
puts("Digite um numero qualquer:  ");
scanf("%d",&num);       

if(num<=0){
puts("Numero nao pode ser menor ou igual a zero");
goto ininum;           
           }



while(i<=num){
i++;                     
if(num%2==0)
printf("%d\t",i);

if(num%2!=0)
printf("\t%d\n\n\n\n\n",i);                      
}


system("pause");}
