/*1) Fazer um programa para que o usuário digite três palavras. O
programa não pode permitir a entrada de palavras com a mesma
quantidade de caractere. Caso ocorro, Mensagem de erro e retornar
para a digitação daquela palavra.
Ao final o programa deverá exibir na tela o somatório dos caracteres
das três palavras digitadas.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main() {

    system("color 81");
    setlocale(LC_ALL, "Portuguese");

    char str1[30], str2[30], str3[30];
    int len1, len2, len3, sumOfLenghts;

    inicio1:
        printf("Digite a primeira palavra: ");
        scanf("%s", str1);
        len1 = strlen(str1);

    inicio2:
        printf("Digite a segunda palavra: ");
        scanf("%s", str2);
        len2 = strlen(str2);

        if(len1 == len2) {
            printf("As palavras não podem ter a mesma quantidade de caracteres! \n");
            goto inicio2;
        }

    inicio3:
        printf("Digite a terceira palavra: ");
        scanf("%s", str3);
        len3 = strlen(str3);

        if(len3 == len1 || len3 == len2) {
            printf("As palavras não podem ter a mesma quantidade de caracteres! \n");
            goto inicio3;}
            
        else
             printf("\t\tA soma dos caracteres das palavras são: %d\n\n\n",len1+len2+len3);    
                       

       
       
       
       
       
       
       
system("pause");}
