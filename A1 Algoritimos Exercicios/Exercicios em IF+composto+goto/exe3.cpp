/*3) Fazer um programa para que o usuário digite dois números. Fazer
a média destes dois números. O programa deverá verificar se a média
dos números está entre o intervalo de valores de 15 e 37. Exibir
mensagem “Valor Válido” para caso o número esteja de acordo. Caso
negativo, exibir mensagem “Número Inválido”. Os números digitados
não podem ser negativos. Caso sejam, exibir mensagem de erro e
retornar para nova digitação daquele número errôneo.*/

#include<stdio.h>
#include<stdlib.h>
main(){
	
	float a=0,b=0,media=0;
	inicio:
	
      printf("escreva o primeiro numero:  ");
      scanf("%f",&a);
      printf("escreva o segundo numero:  ");
      scanf("%f",&b);
      media= (a+b)/2;
      
      
           if (a < 0 || b < 0) {
   				printf("Nao Digite Numeros Negativos!!!\n");
   				goto inicio;
			}
          else if(media>=15 && media<=37){
		  	printf("%1.f = Valor Valido!\n",media);
          }
    	  else      
   			printf (" Valor Invalido...\n");
   		  	
 
   
	system("pause");   
	return 0;    
}
