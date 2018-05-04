#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

float  verificanum(int n1,int n2,int n3){
int maior, menor, meio;
float media=0, raaiz=0;
    if (n1>n2&&n1>n3){
    maior = n1;}
    else if (n2>n1&&n2>n3){
    maior = n2;}
    else if (n3>n1&& n3>n2){
    maior = n3;}
    else{}
    //fim maior
if (n1>n2&&n1<n3 || n1<n2 && n1>n3){
   meio = n1;}
   else if (n2>n1 &&n2<n3 || n2<n1 && n2>n3) {
      meio = n2;}
      else{
     meio = n3;}
   //fim meio
   if (n1<n2&&n1<n3){
    menor = n1;}
    else if (n2<n1&&n2<n3){
    menor = n2;}
    else if (n3<n1&& n3<n2){
    menor = n3;}
    else{}
    //fim menor
printf("o Maior numero e %d\n o numero do meio e %d\n  o Menor numero e %d\n\n",maior,meio,menor);
media= (n1+n2+n3)/3;
raaiz = sqrt(media);
return media;

}
/////////////////////////////////////////////////////////////////////////////////////////////
int main(){
int n1=0,n2=0,n3=0;
float raiz=0;
char resp[5];
ini1:
printf("1. Entre com um Valor inteiro\n");
scanf("%d",&n1);
if (n1<=0 || n1%3 != 0 && n1%6!=0){
printf("O numero nao atende os requisitos minimos\n");
goto ini1;}

ini2:
printf("2. Entre com um Valor inteiro\n");
scanf("%d",&n2);
if (n2%2 !=0 || n2<=0 || n2<=n1 ){
printf("O numero nao atende os requisitos minimos\n");
goto ini2;}


ini3:
printf("3. Entre com um Valor inteiro\n");
scanf("%d",&n3);
if (n3%3 != 0 || n3<=21 && n3>=145 ||n3<=n2 || n3<=0 || n1==n3){
printf("O numero nao atende os requisitos minimos\n");
goto ini3;}


 raiz = verificanum(n1,n2,n3);
 
 printf("a Raiz da media dos numeros e :\n  %f\n\n",raiz);
 
 printf("Quer encerrar o programa ? S ou N\n\n\n");
 scanf("%s",resp);
 
 ////////////////////////////////////////////////////////////////////////
 if(strcmp(resp,"S")==0 || strcmp(resp,"s")==0|| strcmp(resp,"sim")==0){
printf("Fim so Programa\n\n\n");                         }

if(strcmp(resp,"N")==0 || strcmp(resp,"n")==0||strcmp(resp,"nao")==0){
n1=0,n2=0,n3=0,raiz=0;
goto ini1;}                        


system("pause");}
