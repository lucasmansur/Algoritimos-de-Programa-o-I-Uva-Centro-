/*
Fazer um programa para que o usuário digite três números inteiros. O
usuário deve ser informado na tela do que terá que digitar.
Os números digitados não podem conter valores zero e nem serem
negativos (isso se aplica para os três números). Caso isso aconteça, é
preciso exibir uma mensagem de erro para o usuário e retornar para uma
nova digitação daquele valor errôneo.
Para o primeiro número digitado só podemos permitir a entrada de valores
múltiplos de três. Caso não seja múltiplo de três, exibir mensagem de erro
e retornar para nova entrada de dados.
Para o segundo número, não há nenhum tipo de restrição. Qualquer
número é valido.
Para o terceiro número, só poderá ser aceito números pares. Caso seja
digitado um número ímpar, o programa deverá tornar este número par
através de uma operação aritmética.
Os três números digitados não podem ter valores iguais, caso haja número
igual, exibir mensagem de erro e retornar para uma nova digitação do
primeiro número.
Diante dos três números válidos após as críticas executadas acima, o
programa deverá exibir na tela, nessa ordem: o menor número, o número
do meio e o maior número.

*/

#include<stdio.h>
#include<stdlib.h>
main(){
int n1=0,n2=0,n3=0,maior=0,menor=0,meio=0;
                     numero1: 
//-------------------------------------->BLOCO NUMERO1
      printf("\n Digite um numero:  ");
      scanf("%d", &n1);
if (n1 <= 0 || n1%3 != 0) {
printf ("\n Erro N1");
       goto numero1; }
                    numero2: 
//-------------------------------------->BLOCO NUMERO2
printf("\n Digite outro numero:  ");
scanf("%d", &n2);
if (n2 <= 0) {
printf ("\n Erro N2");
goto numero2; }
                    numero3:
//-------------------------------------->BLOCO NUMERO2
printf("\n Digite um ultimo numero:  ");
scanf("%d", &n3);
if (n3 <= 0 || n3%2 != 0) 
n3 = n3 + 1;
//-------------------------------------->BLOCO VALIDAÇAO GERAL 
if (n1 == n2 || n1 == n3 || n2 == n3) {
printf("\n ERRO GERAL!!!\n\n");
goto numero1; }
//-------------------------------------->BLOCO VALIDAÇÃO MENOR MAIOR E MEIO
if((n1 > n2) && (n1> n3)&&(n2 > n3)) {
		 //if(n2 > n3) {
            maior = n1;
            meio = n2;
            menor = n3;
		 } else {
            maior = n1;
            meio = n3;
            menor = n2;
		 }

	 if((n2 > n1) && (n2 > n3)&&(n1 > n3)) {
//		if(n1 > n3) {
            maior = n2;
            meio = n1;
            menor = n3;

		} else {
            maior = n2;
            meio = n3;
            menor = n1;
		}

	    if((n3 > n1) && (n3 > n2)&&(n1 > n2)) {
//	    if(n1 > n2) {
            maior = n3;
            meio = n1;
            menor = n2;
	    } else {
	        maior = n3;
	        meio = n2;
	        menor = n1;
	    }



	printf("Menor = %d \tMeio = %d \tMaior = %d \t\n", menor, meio, maior);









system("pause");}
