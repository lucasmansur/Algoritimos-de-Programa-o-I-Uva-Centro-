/*03) Fazer um programa para calcular o consumo de um veículo conforme os dados
informado no teclado: horas, velocidade média.
Fórmulas:
distancia = horas * velmedia;
consumo = distancia / 12;  */  


#include <stdio.h>
#include <stdlib.h>


main ()

{
     float velmed=0,h=0,dis=0,consumo=0;
     
printf("Informe horas gastar na corrida:  ");
scanf("%f",&h);

printf ("Informe a velocidade media do veiculo durante a corrida:  ");
scanf("%f",&velmed);

dis = h+ velmed;
consumo = dis/12;

printf("Foram gastos %f de combustivel\n",consumo);

system ("pause");
return 0;     
     
     }
