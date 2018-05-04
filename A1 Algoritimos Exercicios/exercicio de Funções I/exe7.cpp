/*7) Fazer uma nova função que recebe a média final de um aluno por parâmetro
e retorna o seu conceito, conforme a tabela abaixo:
    Nota                       Conceito
de 0,0 a 4,9                       D
de 5,0 a 6,9                       C
de 7,0 a 8,9                       B
de 9,0 a 10,0                      A
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
void mediafinal(char media){



if (strcmp(media,"0.0")==0 && strcmp(media,"4.9")==0){
   printf("Conceito:   D"); }
   
      else if (media==5.0 && media==6.9){
       printf("Conceito:   C"); }
   
           else if (media==7.0 && media==8.9){
           printf("Conceito:   B"); }
                
               else if (media==9.0 && media==10.0){
               printf("Conceito:   A"); }
                  
                    else{}
                     
}

main(){setlocale (LC_ALL , "Portuguese");
float media;

printf("Entre com o valor da primeira nota:   ");
scanf("%f",&media);

mediafinal (media);


system("pause");}
