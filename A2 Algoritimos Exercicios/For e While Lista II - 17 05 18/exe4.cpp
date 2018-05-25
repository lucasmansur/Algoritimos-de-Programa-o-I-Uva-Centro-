/*4) Exibiro total do somatório, a média e o total de valores lidos.
O programa deve fazer as leituras dosvalores enquanto o usuário estiver
fornecendo valores positivos. Ou seja, o programa deve pararquando o usuário fornecer um valor negativo.*/

#include<stdio.h>

main() {
	int i=0, numero=1,media=0,x=0;
float soma=0;

	for(i=0; numero>=0;) {
		printf("Informe um valor positivo: ");
		scanf("%d", &numero);
		if (numero> 0) {
			soma=soma+numero;
			media = media + 1;
		}

	}
	printf("A soma e %3.0f e a media e %5.2f\n",soma, soma/media);
}

