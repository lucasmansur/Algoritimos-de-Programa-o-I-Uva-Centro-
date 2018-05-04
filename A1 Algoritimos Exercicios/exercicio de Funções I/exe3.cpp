/*3) Fazer uma programa para criar uma função que recebe três notas de um aluno e
os respectivos pesos. Calcula e retorna a média ponderada.
Fórmula:
media = (((p1*n1)+(p2*n2)+(p3*n3))/(p1+p2+p3));*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
float media(int p1, int p2, int p3, float n1, float n2, float n3){
      
            float cal=0;
            
            cal = ((p1*n1)+(p2*n2)+(p3*n3))/(p1+p2+p3);
            
            printf("O resultado da sua media foi: \t %.2f\n\n",cal);
      }
main(){setlocale (LC_ALL, "Portuguese");
float n1=0,n2=0,n3=0,ari=0;
int p1=0,p2=0,p3=0;

printf("Digite nota da A1 e seu peso:  ");
scanf("%f%d",&n1,&p1);

printf("Digite nota da A2 e seu peso:  ");
scanf("%f%d",&n2,&p2);


printf("Digite nota da A3 e seu peso:  ");
scanf("%f%d",&n3,&p3);

media (p1, p2, p3, n1, n2, n3);




system("pause");}
