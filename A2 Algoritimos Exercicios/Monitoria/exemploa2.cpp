/*Faça um programa para que o usuario digite 8 numeros
sequanciais, iniciando do 0 ao 7

a entrada de dados não pode passar do numero 7 (o programa não pode acietar numeros menores que 0 e  nem maiores de 7).

caso oo numero digitado não tenha obedecido a sequencia de digitação. o programa deverá exibir uma mensagem de erro e retornar para nova
digitação

esses numeros deverão ser armazenados em uma matriz de 2x4 ( duas linhas 4 colunas )  da seguinte forma:
* Os numeros pares. Obrigatoriamente. na primeira linha;
*Os numeros impares, obrigatoriamente  na segunda linha;


	Apos este preenchimento de informações na matriz, o programa deverá imprimir para o usuario:
	
- O somatorio de todos os numeros pares da primeira linha:
- o somatorio de todos os numeros impares da segunda linha
- o somatorio de todos os numeros da primeira , segunda , terceira e quarta coluna;

exemplo :

0 2 4 6 
1 3 5 7

não será aceito forçar gravação da informação na matriz atravez da identificação direta do numero */

#include<stdio.h>
#include<stdlib.h>

main(){
	int mat[2][4];
	int l=0, c=0;
	
	
	for(l=0;l<2;l++) {
		for(c=0;c<4;c++){
			home:
			printf("Indique o indice para a matriz referente a posição Linha = %d / Coluna = %d ",l+1,c+1);
			if(l==0){
			scanf("%d",&mat[l][c]);
			if(mat[l][c]<0 || mat[l][c]>7){
				puts("ERRO-001");
				goto home;
			}
			if(mat[l][c]%2!=0){
				puts("Erro-002");
				goto home;
				}
			}
			//////////////////////////////////////
			if(l==1){
			scanf("%d",&mat[l][c]);
			if(mat[l][c]<0 || mat[l][c]>7){
				puts("ERRO-001");
				goto home;
			}
			if(mat[l][c]%2==0){
				puts("Erro-003");
				goto home;
				}
			}
		}
	}
	puts("\n\n");
	for (l=0;l<2;l++){
		for(c=0;c<4;c++){
			printf("%d",mat[l][c]);
			
		}
	puts("\n");
	}
	
}






