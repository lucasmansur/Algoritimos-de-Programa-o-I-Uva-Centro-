/*01) Criar um algoritmo para preencher
com valores numéricos uma matriz 4 x 4
e que em seguida exiba na tela os elementos da diagonal principal.*/


#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "Portuguese") ;

	int mat[4] [4]; //declaramos a matriz com 4 linhas e 4 colunas = 4x4
	int	l=0,c=0;


	/*-------------------------------------------------------------------------------------------------------------------------------------------------------------
	a) Quando construimos esse laço de repetição desta maneira, o programa ira preencher a matriz começando pela primeira linha e subseguentemente suas colulas
	exemplo = 1 2 3 4
			  5 6 7 8
			  9 1 1 1
			  8 8 8 8

	b) podemos inverter essa operação simplesmente alterando as variaveis do primeiro for
	pelo segundo sendo assim a matriz se preencherá começando pelas colunas ao inves das linhas.
	vide exemplo=  1 5 9 8
				   2 6 1 8
				   3 7 1 8
				   4 8 1 8

	---------------------------------------------------------------------------------------------------------------------------------------------------------------*/


	for(l=0; l<=3; l++) { //for para o laço repetitivo das linhas

		for(c=0; c<=3; c++) {// for para o laço repetitivo das colunas

			printf("Digite o numero representativo da matriz aonde sua linha é %d e coluna %d:  \n",l+1,c+1);
			scanf("%d",&mat[l][c]); //Aqui preenchemos a matriz



		}

	}
	printf("\n\n\n");

	//Aqui iremos Apresentar a matriz
	puts("Matriz Completa:   \n");
	for(l=0; l<=3; l++) {

		for(c=0; c<=3; c++) {

			printf("%d",mat[l][c]);

		}
		printf("\n"); // para pular linha quando terminar a coluna
	}

	//Aqui iremos Apresentar a Diagonal Principal da matriz

	puts ("\n\n");
	puts("Diagonal Principal da Matriz:   \n");

	for(l=0; l<=3; l++) {

		for(c=0; c<=3; c++) {

			if(l == c) // exibe todos o numeros que esteja nas lacunas com numeros igual exemplo: linha 1 coluna 1
				printf("%d \t", mat[l][c]);
			else
				printf("	");


		}


		printf("\n\n\n"); // para pular linha quando terminar a coluna
	}




}
