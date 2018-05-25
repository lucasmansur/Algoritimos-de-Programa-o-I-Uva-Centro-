/*03) Criar um algoritmo para preencher uma matriz 3 x 3
com número inteiros e depois exibir na tela outra matriz
(matriz nova) multiplicando cada elemento da primeira matriz por 2.*/

#include<stdio.h>
#include<locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	int mat[3][3],nmat[3][3];
	int l=0,c=0;

	printf("Preencha os valore correspondentes da matriz:   \n\n");

	for(l=0; l<3; l++) {

		for(c=0; c<3; c++) {
			printf("Linha %d\tColuna %d:   ",l+1,c+1);
			scanf("%d",&mat[l][c]);

		}
	}

	puts("\n\n");
	printf("Matriz Completa:  \n\n");

	for(l=0; l<3; l++) {

		for(c=0; c<3; c++) {

			printf("%d",mat[l][c]);
			
			nmat[l][c] = (mat[l][c])*2; //armazena os valore da primeira matriz e os mutiplica por 2

		}
		puts("\n");
	}

	puts("\n\n");
	puts("Matriz Com valores Mutiplicados por 2:  \n\n");

	for(l=0; l<3; l++) {

		for(c=0; c<3; c++) {

			printf("%d",nmat[l][c]); // exibe os valores mutiplicados da primeira matriz


		}
		puts("\n");
	}



}
