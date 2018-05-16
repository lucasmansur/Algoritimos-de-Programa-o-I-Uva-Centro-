/**1. Fazer um programa para calculo de tabuada.
O usuario devera informar um valor inicial
e um valor final, os valores não podem ser zero, negativos e nem o segundo valor menor que o primeiro caso aconteça,
mensagem de erro para retorno da digitação
o usuario tambem ira inforamr ate qual valor o calculo sera
feito este valor pode ser negativo, zero e nem maior que 10**/



#include<stdio.h>

main() {

	int v1=0,soma=0,v2=0,vend=0,i=0;

valor1:
	puts("informe o valor inicial:  ");
	scanf("%d",&v1);
	if(v1<=0) {
		puts("||Erro||Erro||Erro||Erro||-001-||Erro||Erro||Erro||\nNAO SERA ACEITO VALORES NEGATIVOS E IGUAIS A ZERO\n\tRETORNE A DIGITACAO\n ");
		goto valor1;
	}

valor2:
	puts("Informe o valor final:  ");
	scanf("%d",&v2);
	if(v2<=0||v2<v1) {
		puts("||Erro||Erro||Erro||Erro||-002-||Erro||Erro||Erro||\nNAO SERA ACEITO VALORES NEGATIVOS, IGUAIS A ZERO E MENORES QUE O VALOR INICIAL\n\t\tRETORNE A DIGITACAO\N ");
		goto valor2;
	}

valorend:
	puts("Informe ate aonde o calculo devera acontecer:  ");
	scanf("%d",&vend);
	if(vend<=0||vend>10) {
		puts("||Erro||Erro||Erro||Erro||-003-||Erro||Erro||Erro||\nNAO SERA ACEITO VALORES NEGATIVOS, IGUAIS A ZERO E MAIOERES QUE 10\n\t\tRETORNE A DIGITACAO\n ");
		goto valorend;
	}
	while(v1<=v2) {
		i=1;
		while(i<=vend) {
			soma=v1*i;
			printf("\n%d x %d = %d",v1,i,soma);
			i++;
		}
		printf("\n");
		v1++;
	}




}



