


#include<stdio.h>


main (){
int fonc(int matt[2][4]);
int mat[2][4];
int l=0,c=0;



	for(l=0; l<2; l++) {

		for(c=0; c<4; c++) {
			inicio:
			printf("Digite o numero matriz aonde sua linha e %d e coluna %d:  \n",l+1,c+1);
			if(l==0){
			scanf("%d",&mat[l][c]); 
			if(mat[l][c]>11 || mat[l][c]%2!=0){
				printf("Erro na matriz\n\n");
				goto inicio;
			}
				
			
		}
			
			else{
			scanf("%d",&mat[l][c]); 
			if(mat[l][c]<11 || mat[l][c]>21 || mat[l][c]%2==0){
				printf("Erro na matriz\n\n");
				goto inicio;
			}
				
			
		}
	}
}

puts("Matriz Completa:   \n");
	for(l=0; l<2; l++) {

		for(c=0; c<4; c++) {

			printf("%d",mat[l][c]);

		}
		printf("\n"); // para pular linha quando terminar a coluna
	}



 

}

////////////////////////////////////////////////////////////





int fonc(int matt[2][4] ) {
	int l=2,c=4;
	
	
	
	for(l=2;l>0;l--){
		
			for(c=4;c>0;c--){
				
				
				inicio:
			printf("Digite o numero matriz aonde sua linha e %d e coluna %d:  \n",l-1,c-1);
				if(l==2){
			scanf("%d",&matt[l][c]); 
			if(matt[l][c]<11 || matt[l][c]>21){
				printf("Erro na matriz\n\n");
				goto inicio;
			
				
			}
			
	}
	
			else{
			scanf("%d",&matt[l][c]); 
			if(matt[l][c]>11 || matt[l][c]%2!=0){
				printf("Erro na matriz\n\n");
				goto inicio;
			}
				
			
		}
	
		}
	}
	
	
	puts("Matriz Completa:   \n");
	for(l=2; l>0; l--) {

		for(c=4; c>0; c--) {

			printf("%d",matt[l][c]);

		}
		printf("\n"); // para pular linha quando terminar a coluna
	}

	
	
}

