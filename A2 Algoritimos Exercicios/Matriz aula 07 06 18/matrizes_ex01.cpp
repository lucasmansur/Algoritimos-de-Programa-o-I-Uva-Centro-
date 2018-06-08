/** 1) Fazer um programa para que uma matriz 6x6 
receba valores apenas nas linhas e colunas de valores ímpares. **/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int mat [6][6];
	int l=0, c=0;
	
	
	for (l = 0; l < 6; l++){
		for (c = 0; c < 6; c++){
			if(l % 2 != 0 && c % 2 != 0) {
				 printf("Digite um valor para a matriz[%d][%d]: ", l, c);
				 scanf("%d", &mat[l][c]);	
			}
		}
	}
	
	for (l = 0; l < 6; l++){
		for (c = 0; c < 6; c++){
			if(l % 2 != 0 && c % 2 != 0) {
		 		 printf("%d ",mat[l][c]);		 	 	
			}
		}
		printf("\n");
	}

	
}
