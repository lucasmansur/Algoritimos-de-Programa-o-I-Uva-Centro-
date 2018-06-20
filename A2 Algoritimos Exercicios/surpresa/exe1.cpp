#include<stdio.h>
main()
{
	int l, c;
	int mat[2][4];
	int matinv(int mat[2][4]);
	
	
	for(l=0; l<2; l++)
	{
		for(c=0; c<4; c++)
		{
			linha1:
			printf("Digite um valor para a Linha %d da %d Coluna: ", l+1, c+1);
			
			if(l==0)
			{
				scanf("%d", &mat[l][c]);
				
				if(mat[l][c]>11 || mat[l][c]%2!=0)
					{
					printf("O numero deve ser par e menor que 11\n");
					goto linha1;
					}				
			}
			if(l==1)
				{
				scanf("%d", &mat[l][c]);
				
				if(mat[l][c]<11 || mat[l][c]>21 || mat[l][c]%2==0)
					{
					printf("O numero deve estar entre 11 e 21\n");
					goto linha1;
					}	
			}
		}
	}
	
	for(l=0; l<2; l++)
	{
		for(c=0; c<4; c++)
		{
			printf("%d	", mat[l][c]);
		}
		printf("\n");
	}
	
	matinv(mat);
}

int matinv(int mat[2][4])
{
	int l, c, ln=0, cn=0;
	int mati[2][4];
		
	for(l=1; l>=0; l--)
	{
		for(c=3; c>=0; c--)
		{
			mati[ln][cn]=mat[l][c];
			cn++;
		}
		ln++;
		cn=0;
	}	
	
	for(ln=0; ln<2; ln++)
	{
		for(cn=0; cn<4; cn++)
		{
			printf("%d	", mati[ln][cn]);
		}
		printf("\n");
	}	
	
	
	
}
