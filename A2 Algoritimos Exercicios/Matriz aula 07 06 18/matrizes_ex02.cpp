/** 2) Fazer um programa para que o usuário faça o somatório dos valores 
acima da área da diagonal principal e conte quantos números foram somados. **/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int mat[4][4] = {{}};
	int l = 0, c = 0, cont = 0, soma = 0;
	
	
	for (l = 0; l < 4; l++)
	{
 		for (c = 0; c < 4; c++)
		 {
 			printf("Digite o valor da matriz linha = %d  coluna = %d : ", l+1, c+1);
 			scanf("%d", &mat[l][c]);
		 }
	}

	
	for (l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%d", mat[l][c]);
		}
		printf("\n");
	}
	

	
	for(l = 0; l < 4; l++)
	{
		for (c = 0; c < 4; c++)
		{
			if (c > l)
			{
				cont++;
				soma = soma + mat[l][c]	;
			}
		}
	}
	
	printf("\na soma dos numeros acima da diagonal principal eh  %d\n",soma);
	
	printf("a quantidade de numeros somados eh %d",cont);

}



