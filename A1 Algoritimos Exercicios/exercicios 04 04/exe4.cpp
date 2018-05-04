/*4) Fazer um programa para que o usuário possa inserir dois números.
A nova função a ser criada deverá exibir qual o maior número.
Os números informados não podem ser iguais.
Fazer verificação, aplicar mensagem de erro
e retornar para nova digitação caso os valores sejam iguais.*/


#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int avalianumero (int x1, int x2){
int maior=0;
    if(x1>x2){
       return maior = x1;       
}else{
      return maior = x2;
      }
}


int main(){setlocale(LC_ALL,"Portuguese");
int n1, n2, maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    inicioN2:
        printf("Digite o segundo número: ");
        scanf("%d", &n2);

        if(n1 == n2) {
            printf("Os números não podem ser iguais! Tente novamente! \n");
            goto inicioN2;
        }
        
        
   maior = avalianumero (n1,n2);    
   printf("maior numero: %d",maior);
   
   system("pause");
   return 0;}   
        
        
        
        
        
        
