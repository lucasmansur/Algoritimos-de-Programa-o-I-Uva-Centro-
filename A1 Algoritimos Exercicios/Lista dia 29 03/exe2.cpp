/* Fazer um programa para que o usuário possa digitar quatro
palavras. O programa não poderá aceitar palavras com menos de
três caracteres e com mais de 14 caracteres. Ao final o programa
deverá exibir quantas palavras possuem a mesma quantidade de
caracteres.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
main(){setlocale(LC_ALL, "Portuguese");
    char str1[30], str2[30], str3[30], str4[30];
    int len1=0, len2=0, len3=0, len4=0;
//-------------------------Bloco Primeira Palavra-----------------------------------------------//    
inicio1:
        printf("Digite a primeira palavra: ");
        scanf("%s", str1);
        len1 = strlen(str1);
        
        if(len1<3|| len1>14){
printf("ERRO Primeira Palavra não contém, os requisitos minimos.\nDigite novamente...\n");   
            goto inicio1;}                 
//-------------------------Bloco Segunda Palavra-----------------------------------------------//            
inicio2:        
        printf("Digite a segunda palavra: ");
        scanf("%s", str2);
        len2 = strlen(str2);
        
             if(len2<3|| len2>14){
printf("ERRO segunda Palavra não contém, os requisitos minimos.\nDigite novamente...\n");   
            goto inicio2;}   
//-------------------------Bloco Terceira Palavra-----------------------------------------------//            
inicio3:        
        printf("Digite a terceira palavra: ");
        scanf("%s", str3);
        len3 = strlen(str3);
        
             if(len3<3|| len3>14){
printf("ERRO terceira Palavra não contém, os requisitos minimos.\nDigite novamente...\n");   
            goto inicio3;} 
//-------------------------Bloco Quarta Palavra-----------------------------------------------//              
inicio4:        
        printf("Digite a quarta palavra: ");
        scanf("%s", str4);
        len4 = strlen(str4);
        
             if(len4<3|| len4>14){
printf("ERRO quarta Palavra não contém, os requisitos minimos.\nDigite novamente...\n");   
            goto inicio4;}   
//------------------------Final dos Blocos de Entrada de dados-------------------------------//
//
//-----------------------Começo das verificações--------------------------------------------//            
if(len1 == len2 && len1 == len3 && len1 == len4 && len2 == len3 && len2 == len4 && len3 == len4)
printf("todas as palavras são iguais\n\n\n");
else

if(len1 == len2){
printf("Somente a primeira e a segunda palavra tem a mesma quantidade de caracteres\n");              
}else if(len1 == len3){
printf("Somente a primeira e a terceira palavra tem a mesma quantidade de caracteres\n");
}else if(len1 == len4){
printf("Somente a primeira e a quarta palavra tem a mesma quantidade de caracteres\n");
}else

           
if(len2 == len3){
printf("Somente a segunda e a terceira palavra tem a mesma quantidade de caracteres\n");
}else if(len2 == len4){
printf("Somente a segunda e a quarta palavra tem a mesma quantidade de caracteres\n");
}else
printf("Nenhuma palavra tem a mesma quantidade\n");



system ("pause");
}
