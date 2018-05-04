/*-------- 01) fazer um programa para exibir o saldo com reajuste de 1%. O usuário deverá informar
via teclado o valor do saldo    -------*/

#include <stdio.h>
#include <stdlib.h>

main ()
{
     
float saldo=0;
printf("Informe o saldo: ");
scanf ("%f",&saldo);
saldo=(saldo*0.1)/100; 
printf("O saldo reajustado e de %f\n",saldo);

system("pause");
return  0;
     
     
 }
