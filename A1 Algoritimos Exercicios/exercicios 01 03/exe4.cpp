/* 04) fazer um programa para cálculo de um salário líquido de um professor. Serão
fornecidos valor da hora aula, numero de aulas dadas e o % de desconto do INSS.
Fórmula:
salario = valor da hora/aula * número de aulas dadas;
desconto = salario * inss /100;
salario_liquido = salario – desconto;   */ 


#include <stdio.h>
#include <stdlib.h>

main ()

{
     float valorhora=0, naulas=0, inss=0, salario=0, salarioliqui=0, desc=0 ;
    
printf("valor das horas por aula:  ");
scanf("%f",&valorhora);

printf("Informe o numero de aulas dadas:  ");
scanf("%f",&naulas);

printf("Informe a porcentagem do inss:  ");
scanf("%f",&inss);

salario = valorhora * naulas;
desc    = salario * inss /100;
salarioliqui = salario - desc;

printf ("Salario liquido de: %f\nSalario Bruto: %f\n",salarioliqui,salario);

printf ("%d",a*b*c);
system("pause");
return 0;

     
     
     
     }
