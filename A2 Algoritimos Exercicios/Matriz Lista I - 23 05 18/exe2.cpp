/*02) Criar um algoritmo para preencher com valores numéricos
uma matriz 3 x 3 e que em seguida exiba na tela os elementos
que não fazem parte da diagonal principal.*/


#include<stdio.h>
#include<locale.h>

main() {
		setlocale(LC_ALL, "Portuguese") ;

	int mat[3][3];
	int l=0,c=0;

	puts ("Preencha a seguir na respectiva linha e coluna \n   com valores desejados da matriz.\n\n\n");

	for(l=0; l<3; l++) {

		for(c=0; c<3; c++) {

			printf("Preencha com o valor da linha %d e coluna %d:  ",l+1,c+1);
			scanf("%d",&mat[l][c]);

		}
	}

	puts("\n\n\n");
	puts("Matriz Completa:  \n");

	for(l=0; l<3; l++) {

		for(c=0; c<3; c++) {

			printf("%d",mat[l][c]);


		}
		puts("\n");
	}

	puts("\n\n\n");
	puts("Elementos que não fazem parte da Diagonal Principal:   \n");

	for(l=0; l<3; l++) {

		for(c=0; c<3; c++) {
			
			if(l!=c)
				printf("%d",mat[l][c]);

				else
					printf("x");
				}

		puts("\n");
	}
}
