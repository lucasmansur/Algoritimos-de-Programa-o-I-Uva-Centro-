/*----------- 02) Fazer um programa para que o usuário informe uma temperatura em graus Celsius e
                  transforme em graus Fahrenheit. Exibir o resultado da conversão.
                  Formula: F = (9*C+160)/5 -------------*/
                  
                  
                  #include <stdio.h>
                  #include <stdlib.h>
                  
main()      
{
                              //declaração das variaveis
            float gc=0, formula=0 ;
                      //entrada de Dados pelo usuario          
     printf ("Informe a temperatura em graus celsios:  ");
     scanf ("%f",&gc);
     
                     //Calculo da trasnformação dos dados     
     formula = (9*gc+160); 
  
                    //informação do resultado do calculo
     printf ("a temperatura em graus celsios e %fC\na temperatura convertida e de %fF\n",gc,formula);
     
      
                   //diretiva para pausar o sistema em determinado ponto      
system ("pause");

return 0;           
}            
