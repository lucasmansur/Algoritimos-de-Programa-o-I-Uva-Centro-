/*6) Fazer uma nova função que recebe um valor inteiro
e verifica se o valor é positivo ou negativo.
Exibir a mensagem dizendo se o número é positivo ou negativo.*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int valor (int n1){

if(n1<0)
printf("Valor é negativon\n\n\n");
else
printf("Valor é positivo\n\n\n");    
}

main(){setlocale (LC_ALL, "Portuguese");
int n1=0;
printf("Digite um valor inteiro pegativo ou positivo:   ");
scanf("%d",&n1);
    
    valor (n1);
system("pause");}
