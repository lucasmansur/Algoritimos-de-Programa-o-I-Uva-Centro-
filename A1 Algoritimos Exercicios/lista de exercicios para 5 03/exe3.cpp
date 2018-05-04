/*03) Faça um programa para que o usuário informe dois números. O
programa deverá calcular a divisão entre esses dois números e
calcular o resto da divisão. Exibir o resultado do resto da divisão
em uma mensagem.
Fórmula:
 q = x / y;
 r = x - y * q;     */ 
 
 
 
#include <stdio.h>
#include <stdlib.h>

main ()

{
     int q=0, x=0 ,y=0 ,r=0;
     
     printf("\t\tDigite o valor de X:      ");
     scanf("%d",&x);
     
     printf("\t\tDigite o valor de Y:      ");
     scanf("%d",&y);
     
     
     q = x / y;
     r = x - y * q;
     
     printf("\t\tO resto desta divisao e:  %d\n\n\n\n",r); 
     
     system("pause");
     return 0;
     

     
     
     
     
     
     
     
     }
