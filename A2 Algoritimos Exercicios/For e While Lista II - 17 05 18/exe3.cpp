/*3)Apresentar todos os números divisíveis por 4 que sejam menores que 200*/


#include<stdio.h>

main(){
	int i=0;
	
	for (i=0;i<=199;i++){
		if(i%4==0){
			printf("%d",i);
		puts("\n");	
		}
		
	}
	
}
