/*09) Faça um programa para que o usuário informe comprimento,
largura e altura de um objeto para que o programa possa calcular o
volume do objeto. Exibir o valor do objeto obtido em uma
mensagem.*/



#include<stdio.h>
#include<stdlib.h>


main()


{
float  a=0, l=0, c=0, v=0;

printf("Digite a altura do objeto:  ");
scanf("%f",&a);


printf("Digite a largura do objeto:  ");
scanf("%f",&l);

printf("Digite o comprimento do objeto:  ");
scanf("%f",&c);

v = a * l * c;


printf("O volume do objeto e: %f cm\n\n\n,v"); 



system("pause");
return 0 ;  
      
      
      
      
      
      }


