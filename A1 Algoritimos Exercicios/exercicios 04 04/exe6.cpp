/*6) Fazer um programa para que o usuário opte por uma opção de conversão
“1 – Celsius 2 – Farenheit”.
Após a escolha o usuário deverá informar a temperatura.
Criar uma nova função para aplicar a conversão conforme opção escolhida.
Fórmulas:
C=5*(F-32)/9
F=(9*C/5) + 32
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

float converte (int op , float temp){
 
 float tempr =0;
       if (op == 1){
          tempr = 5 *(temp - 32)/9;
          }else if (op == 2){
                tempr = (9 * temp / 5) + 32;
                }else{
                printf("Opção Inválida!\n");}
}

int main(){setlocale(LC_ALL,"Portuguese");

float temp=0, tempr=0;
int op=0;

printf("escolha uma opção parar conversão:\n1- Farenheit \t2- Celsius\n");

scanf("%d",&op);

puts("informe a temperatura: \n");

scanf("%f",&temp);

tempr = converte(op, temp);

printf("Você escolheu a opção %d. \nTemperatura convertida: %f \n", op, tempr);


system("pause");
return 0;}
