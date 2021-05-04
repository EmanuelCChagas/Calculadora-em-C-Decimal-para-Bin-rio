#include <stdio.h> //biblioteca padrão do C (comandos como printf, scanf, entre outros)
#include <stdlib.h> // alocação de memoria
#include <locale.h> // mudança de linguagem para português (para aceitar caracteres como ç)
#include <math.h> // instruções matemáticas

int main(int argc,char *argv[])
{
    setlocale(LC_ALL,"Portuguese"); // mudança de linguagem para português

    //variaveis globais

    int opcao,resp1,resp2;
    int numdec, rem=0, decnumbin = 0, i=1;
    int binnum, rem1,bindec=0, i1=0;

    // inicio da calculadora

    printf("CALCULADORA DE CONVERSÃO DE NÚMEROS BINARIOS\n");
    printf("------------------------------------------\n");
    printf("Você deseja converter de Decimal para Binario ou de Binario para Decimal?\n");
    printf("\n");
    printf("1-Decimal para Binario\n");
    printf("2-Binario para Decimal\n\n\n");
    scanf("%d", &opcao);

     switch(opcao){  //responsável pelas instruções das opções de conversão
     case 1:          // primeiro caso, decimal para binário
          do{
                rem=0; //zerar o valor das variaveis para o loop ser feito
                numdec=0;
                i=1;
                decnumbin=0;

                printf("\n Digite o numero decimal de 1 a 999:\n");
                scanf("%d", &numdec);
                if(numdec>999){ //valor máximo que possa ser convertido
                    printf("Valor decimal invalido\n\n\n");
                        break;
                              };

                while(numdec)  // loop para a conversão do decimal para o número binario
                {
                   rem = numdec % 2;
                   numdec = numdec / 2;
                   decnumbin =  decnumbin + (rem * i) ;
                   i = i * 10;
                }
                /* loop funciona assim
                exemplo:
                10=número decimal-> 10=numdec
                1º conta===10/2=5 restante=0 ->
                                                   numdec=10 rem=0 numdec=5 decnumbin= 0 + (0*1)=0

                2º conta===5/2=2 restante=1  ->
                                                  numdec=5  rem=1 numdec=2 decnumbin= 0 + (1*10)=10

                3º conta===2/2=1 restante=0 ->
                                                 numdec=2 rem=0 decnumbin= 10+(0*100)=10

                4º conta===1/2 restante=1   -> numdec=1 rem=1 decnumbin= 10+(1*1000)= 1010

                resultado=1010
                */
               system("cls"); //limpar log
               printf("O resultado é %11d\n",decnumbin); //mostrar resultado

               printf("Deseja fazer outra conversão?\n"); //decisão do usuário de fazer outra conversão
               printf("1-Fazer outra conversão\n");
               printf("2-Sair\n");
               scanf("%d", &resp2);
               if(resp2!=1){ //sair caso não queira fazer outra conversão
                       break;
                           };
             }
           while(resp2=1); //continuar fazendo o codigo enquanto for escolhido fazer outra conversão
           break;

     case 2: //segundo caso binário para decimal
        do{
            binnum=0; //zerar o valor das variaveis para o loop ser feito
            rem1=0;
            i1=0;
            bindec=0;
            printf("\n Digite o numero binário sem espaçamento que tenha o valor menor que 999 em decimal:\n");
            scanf("%d", &binnum);
            if(binnum>=1111100111){ //valor máximo que possa ser convertido
                printf("Número binário invalido\n\n\n");
                        break;}



             while(binnum > 0) { //loop para número decimal
            rem1= binnum % 10;
            bindec=bindec + rem1 * pow(2,i1);
            binnum=binnum/10;
            i1++;
                              }
            /*   loop funciona assim
                exemplo:

              1010: número binário=binnum
            1º conta:===== binnum=1010/10=101 restante=0 ->
                                                    binnum=1010 rem=1 bindec=0 + 0 * pow(2,0) -> bindec=0+0*1=0
            2º conta====== binnum=101/10=10 restante=1 ->
                                                   binnum=101 rem=1  bindec= 0 + 1 *pow(2,1) -> bindec=0+1*2=2
            3º conta=======binnum=10/10=1 restante=0  ->
                                                   binnum=10 rem=0 bindec=2+0*pow(2,2) -> bindec=2+0*4=2
            4º conta=======binnum=1/10=0 restante=1  ->
                                                   binnum=1 rem=1 bindec=2+1*pow(2,3) ->=bindec=2+1*8=10
             */
           system("cls"); //limpar log
           printf("O resultado é %d\n",bindec);//mostrar resultado
           printf("Deseja fazer outra conversão?\n"); //decisão do usuário de fazer outra conversão
           printf("1-Fazer outra conversão\n");
           printf("2-Sair\n");
           scanf("%d", &resp1);
           if(resp1!=1){ //sair caso não queira fazer outra conversão
            break;
           };
               }
           while(resp1=1); //continuar fazendo o codigo enquanto for escolhido fazer outra conversão
           break;



     default: //caso nem uma opção definida for escolhida
         printf("Opção invalida \n\n"); //escrever opção invalida

         break; //sair
                }

     system("pause"); //executa o comando pause do sistema operacional que fará o console ficar esperando por uma tecla
     return 0;

  }
