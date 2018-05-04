/**5.	Fazer um programa para que o usuário digite uma frase com no máximo 40 letras.
Se o tamanho for maior que 40, dar uma mensagem de erro e solicitar nova digitação. 
Exibir na a frase na posição vertical (uma letra em baixo da outra).**/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

main(){
char frase[39];
int i=0,num=0;       

              palavraini:
puts("Digite uma frase com no maximo 40 caracteres");       
gets(frase);
     num = strlen (frase);

     if(num>40){
puts("No Maximo 40 Caracteres!!");
goto palavraini;     }


	while(i <= num){
			printf("\n%c", frase[i]);
			i++;
		}

       
       
system("pause");}
