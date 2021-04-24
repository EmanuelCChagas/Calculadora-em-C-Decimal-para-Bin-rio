 /******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int numero_escolhido;
int num_1 = 0; // opcao de so     
int num_2 = 0; // opcao de so
int num_3 = 0; // opcao de so  
int num_4 = 0; // opcao de so  
int num_5 = 0; // opcao de so  
int num_6 = 0; // opcao de so  

int por_1; // porcentagem
int por_2; // porcentagem
int por_3; // porcentagem
int por_4; // porcentagem
int por_5; // porcentagem
int por_6; // porcentagem
int total;
int main(int argc,char *argv[])
{
  do { 
      
      printf("Qual o melhor sistema operacional para uso em servidores?\n");
        printf("-------------------------------------------------------\n");
        printf("1- Windows Server\n");
        printf("2 - Unix\n");
        printf("3 - Linux\n");
        printf("4 - Netware\n");
        printf("5 - Mac OS\n");
         printf("6 - Outro\n\n");
        printf(" Para ver os resultados digite 0\n");
        scanf("%d" , &numero_escolhido);
         if(numero_escolhido > 6)  // nao aceitar valor maior que 6
         {
             printf("numero invalido");
             return 0;
         };
         
        if (numero_escolhido <0){  // nao aceitar valor menor que 0
            printf("numero invalido");
             return 0;
        
        };
         switch (numero_escolhido) // escolha de votacao
                       {
                           case 1:
                                printf("\nvoto computado\n\n"); //mostrar ao usuario que seu voto foi computado
                                 num_1=num_1 + 1; //adicionar voto
                                 break; //voltar ao menu
                            case  2:
                                 printf("\nvoto computado\n\n");
                                    num_2=num_2 + 1;
                                     break;
                          
                           case  3: 
                            printf("\nvoto computado\n\n");
                              num_3=num_3 + 1;
                                     break;
                          
                           case  4:
                           printf("\nvoto computado\n\n");
                              num_4=num_4 + 1;
                                     break;
                           
                           case  5:
                            printf("\nvoto computado\n\n");
                              num_5=num_5 + 1;
                                     break;
                           case  6:
                            printf("\n computado\n\n");
                              num_6=num_6 + 1;
                              break;
                        
                                            }

                  }
    while(numero_escolhido != 0); //enquanto o numero nao for 0 fazer o loop
    
    total= (num_1 + num_2 + num_3 + num_4 + num_5 + num_6); //soma do total
    por_1= (num_1*100)/(total);// regra de 3 para cada um
    por_2= (num_2*100)/(total);// regra de 3 para cada um
    por_3= (num_3*100)/(total);// regra de 3 para cada um
    por_4= (num_4*100)/(total);// regra de 3 para cada um
    por_5= (num_5*100)/(total);// regra de 3 para cada um
    por_6= (num_6*100)/(total);// regra de 3 para cada um
    printf("\n Resultado: \n\n ");
    printf("\n total de votos %d\n\n", total);
    printf("1- Windows Server= %d  votos e %d %\n", num_1,por_1);
    printf("2-  Unix= %d votos e %d %\n", num_2,por_2);
    printf("3 - Linux= %d votos e %d %\n", num_3,por_3);
    printf("4 - Netware= %d votos e %d %\n",num_4,por_4);
    printf("5 - Mac OS= %d votos e %d %\n", num_5,por_5);
    printf("6 - Outro= %d votos e %d %\n", num_6,por_6);
    
    return 0;
}
