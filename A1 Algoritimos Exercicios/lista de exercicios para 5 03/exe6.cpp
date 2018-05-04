/*06) Faça um programa para que o usuário informe dois números e o
programa deverá executar a troca destes valores entre eles.
Exemplo: o valor de n1 deverá ir para o n2 e o valor de n2 deverá ir
para o n1. Exibir os valores invertidos em duas mensagens. */


#include<stdio.h>
#include<stdlib.h>


main()

{
 int n1 = 0, n2 = 0, troca=0;
 printf("Digite o primeiro numero:  ");
 scanf("%d",&n1);
 
 printf("Digite o segunto numero:   ");
 scanf("%d",&n2);
 
 printf("O valor dos numero antes da troca e de %d  e %d\n",n1,n2);
 
 troca=n1;
 n1=n2;
 n2=troca; 
 
  printf("O valor dos numeros depois da troca ficaram assim: %d e %d\n\n",n1,n2);
  system("pause");
  return 0;
 
 
}
