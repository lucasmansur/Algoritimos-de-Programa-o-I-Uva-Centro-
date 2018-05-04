/*08) Faça um programa para que o usuário informe o valor do dólar,
o valor da taxa de conversão e o programa deverá converter o valor
do dólar informado em um valor em real. Exibir o valor do real
obtido em uma mensagem.
Fórmula: real = dolar * taxa; */


#include<stdio.h>
#include<stdlib.h>

main()
{
      
float dolar=0, taxa=0, real=0;

printf("Valor Dolar:  ");
scanf("%f",&dolar);

printf("Valor Taxa:   ");
scanf("%f",&taxa);

real= taxa * dolar;

printf("O valor em Real e:  %f\n\n\n",real);


system("pause");
return 0;



}
