/*05) Faça um programa para que o usuário informe um número e
faça o cálculo da terça parte deste número. Exibir os valores
informados e o resultado em uma única mensagem. */


#include<stdio.h>
#include<stdlib.h>


main()
{
     float n1;
     
     printf("Informe o numero:  ");
     scanf("%f",&n1);
     
     printf("A terceita parte de %f e %f\n\n",n1,n1/3);
     
     system("pause");
     return 0;
      
      }
