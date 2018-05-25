/*5)Escrever um programa que leia, valores inteiros, até ser lido o valor-99.
Quando isso acontecero programa deverá escrever a soma e a média dos valores lidos*/

#include<stdio.h>

main(){
	int soma=0;	
	int num=0, i=0;
	float media=0;
	
for(num=0;num!=-99;i++){
	
	soma= soma +num;
	puts("Digite um numero inteiro:  ");
	scanf("%d",&num);
	
	
}
media = soma/i;
printf("a soma dos numeros digitados sao:  %d\n\n",soma);
printf("a media dos numeros e : %3.2f \n\n\n ",media);

}
