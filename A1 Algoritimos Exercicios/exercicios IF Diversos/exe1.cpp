/*1) Faça um programa para calcular a distância e o consumo numa
viagem. O usuário deverá informar a velocidade média, as horas e a
cidade.
Exibir o consumo gasto.
Fórmulas:
distancia = horas * velmedia;
consumo = distancia / quilometro;

Cidade Quilometro
Rio 9
Minas 7
Espirito Santo 6
São Paulo 12                */


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


main(){
setlocale(LC_ALL, "Portuguese");
float velmed=0,hora=0, quilo=0, distancia=0, consumo=0;
char cidade[30];

                 printf("Informe a Velocidade média:  ");
                 scanf("%f",&velmed);
                 printf("Informe as Horas:  ");
                 scanf("%f",&hora);
                 inicio:
                 printf("Informe o numero Referente a Cidade:  \n->  'RJ' Para Rio de Janeiro\n->  'MG' Para Minas Gerais\n->  'ES' para Espirito Santo\n->  'SP' Para São Paulo\n\n ");
                 scanf("%s",&cidade);

                 distancia = hora * velmed;
             if(strcmp(cidade,"RJ")==0){
quilo = 9;      
consumo = (distancia / quilo);
printf("O consumo gasto nesta viagem será de  %1.f KM/H\n\n\n",consumo);}
             else if(strcmp(cidade,"MG")==0){
quilo = 7;      
consumo = (distancia / quilo);
printf("O consumo gasto nesta viagem será de  %1.f KM/H\n\n\n",consumo);}
             else if(strcmp(cidade,"ES")==0){
quilo = 6;      
consumo = (distancia / quilo);
printf("O consumo gasto nesta viagem será de  %1.f KM/H\n\n\n",consumo);}
             else if(strcmp(cidade,"SP")==0){
quilo = 12;      
consumo = (distancia / quilo);
printf("O consumo gasto nesta viagem será de  %1.f KM/H\n\n\n",consumo);}  
else{
     printf("Erro #404 - Informe um valor 'Cidade' Correspondendte!\n\n");
goto inicio;}
      
system("pause");
}
