/**
2. Fazer um programa para que o usuario informe um numero inicial
e um final os valores nao podem ser zero negativos e nem o segundo
inferior ou igual ao primeiro o programa devera executar em ordem
decrescente e verificar  os numero multiplos de 3 e 8
é preciso quantificar quantos sao os numeros multiplos de 3 e 8
em uma nova função
verificar qual é o maior quantitativo.**/

#include<stdio.h>

int mutiplos(int m3,int m8,int v1,int v2) {

	while(v2 > v1) {
		if(v2%3==0) {
			m3++;
		}
		if(v2%8==0) {
			m8++;
		}

		v2--;
	}
	printf("mutiplos de 3 = %d\nmutiplos de 8 = %d\n",m3,m8);
	if(m3>m8) {
		printf("Ha maior quantidade de mutiplos de 3 nesse intervalo de numeros.");
	}
	if(m8>m3) {
		printf("Ha maior quantidade de mutiplos de 8 nesse intervalo de numeros.");
	}
}

//==========================================================================================//

main() {
	int v1=0,v2=0,i=0,m3=0,m8=0;

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
	if(v2<=0||v2<=v1) {
		puts("||Erro||Erro||Erro||Erro||-002-||Erro||Erro||Erro||\nNAO SERA ACEITO VALORES NEGATIVOS, IGUAIS A ZERO E MENORES QUE O VALOR INICIAL\n\t\tRETORNE A DIGITACAO\n ");
		goto valor2;
	}
	mutiplos( m3, m8,v1,v2);
}

