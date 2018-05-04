/*5) Fazer um programa que recebe a idade de um nadador por parâmetro
(criar nova função para isso) e retorna, também por parâmetro,
a categoria desse nadador de acordo com a tabela abaixo:
Idade                    Categoria
5 a 7 anos               Infantil A
8 a 10 anos              Infantil B
11-13 anos               Juvenil A
14-17 anos               Juvenil B
Maiores de 18 anos       Adulto
(inclusive)
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
void parametros (int idade){
char aux[30];     

     if(idade >=5 && idade <= 7){
     strcpy (aux ,"Infantil A\n\n");}
     
     else if(idade >=8 && idade <=10){
     strcpy (aux ,"Infantil B\n\n");}
     
     else if(idade >= 11 && idade <= 13){
     strcpy (aux ,"Juvenil A\n\n");}
     
     else if(idade >=14 && idade <= 17){
     strcpy (aux ,"Juvenil B\n\n");}
     
     else
     strcpy (aux ,"Adulto\n\n");    
     
     printf("O nadador se encaixa na seguinte categoria:   %s",aux);
}
main(){setlocale (LC_ALL , "Portuguese");
int idade=0;

printf("Entre com a idade do nadador:  ");
scanf("%d",&idade);

parametros (idade);




system("pause");}



