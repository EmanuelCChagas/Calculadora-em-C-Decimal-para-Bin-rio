#include <stdio.h> //biblioteca padr�o do C (comandos como printf, scanf, entre outros)
#include <stdlib.h> // aloca��o de memoria
#include <locale.h> // mudan�a de linguagem para portugu�s (para aceitar caracteres como �)
#include <math.h> // instru��es matem�ticas

int main(int argc,char *argv[])
{
    setlocale(LC_ALL,"Portuguese"); // mudan�a de linguagem para portugu�s

    //variaveis globais

    int opcao,resp1,resp2;
    int numdec, rem=0, decnumbin = 0, i=1;
    int binnum, rem1,bindec=0, i1=0;

    // inicio da calculadora

    printf("CALCULADORA DE CONVERS�O DE N�MEROS BINARIOS\n");
    printf("------------------------------------------\n");
    printf("Voc� deseja converter de Decimal para Binario ou de Binario para Decimal?\n");
    //printf("")
    printf("\n");
    printf("1-Decimal para Binario\n");
    printf("2-Binario para Decimal\n\n\n");
    scanf("%d", &opcao);

     switch(opcao){  //respons�vel pelas instru��es das op��es de convers�o
     case 1:          // primeiro caso, decimal para bin�rio
          do{
                rem=0; //zerar o valor das variaveis para o loop ser feito
                numdec=0;
                i=1;
                decnumbin=0;

                printf("\n Digite o numero decimal de 1 a 999:\n");
                scanf("%d", &numdec);
                if(numdec>999){ //valor m�ximo que possa ser convertido
                    printf("Valor decimal invalido\n\n\n");
                        break;
                              };

                while(numdec)  // loop para a convers�o do decimal para o n�mero binario
                {
                   rem = numdec % 2;
                   numdec = numdec / 2;
                   decnumbin =  decnumbin + (rem * i) ;
                   i = i * 10;
                }
                /* loop funciona assim
                exemplo:
                10=n�mero decimal-> 10=numdec
                1� conta===10/2=5 restante=0 ->
                                                   numdec=10 rem=0 numdec=5 decnumbin= 0 + (0*1)=0

                2� conta===5/2=2 restante=1  ->
                                                  numdec=5  rem=1 numdec=2 decnumbin= 0 + (1*10)=10

                3� conta===2/2=1 restante=0 ->
                                                 numdec=2 rem=0 decnumbin= 10+(0*100)=10

                4� conta===1/2 restante=1   -> numdec=1 rem=1 decnumbin= 10+(1*1000)= 1010

                resultado=1010
                */
               system("cls"); //limpar log
               printf("O resultado � %11d\n",decnumbin); //mostrar resultado

               printf("Deseja fazer outra convers�o?\n"); //decis�o do usu�rio de fazer outra convers�o
               printf("1-Fazer outra convers�o\n");
               printf("2-Sair\n");
               scanf("%d", &resp2);
               if(resp2!=1){ //sair caso n�o queira fazer outra convers�o
                       break;
                           };
             }
           while(resp2=1); //continuar fazendo o codigo enquanto for escolhido fazer outra convers�o
           break;

     case 2: //segundo caso bin�rio para decimal
        do{
            binnum=0; //zerar o valor das variaveis para o loop ser feito
            rem1=0;
            i1=0;
            bindec=0;
            printf("\n Digite o numero bin�rio sem espa�amento que tenha o valor menor que 999 em decimal:\n");
            scanf("%d", &binnum);
            if(binnum>=1111100111){ //valor m�ximo que possa ser convertido
                printf("N�mero bin�rio invalido\n\n\n");
                        break;}



             while(binnum > 0) { //loop para n�mero decimal
            rem1= binnum % 10;
            bindec=bindec + rem1 * pow(2,i1);
            binnum=binnum/10;
            i1++;
                              }
            /*   loop funciona assim
                exemplo:

              1010: n�mero bin�rio=binnum
            1� conta:===== binnum=1010/10=101 restante=0 ->
                                                    binnum=1010 rem=1 bindec=0 + 0 * pow(2,0) -> bindec=0+0*1=0
            2� conta====== binnum=101/10=10 restante=1 ->
                                                   binnum=101 rem=1  bindec= 0 + 1 *pow(2,1) -> bindec=0+1*2=2
            3� conta=======binnum=10/10=1 restante=0  ->
                                                   binnum=10 rem=0 bindec=2+0*pow(2,2) -> bindec=2+0*4=2
            4� conta=======binnum=1/10=0 restante=1  ->
                                                   binnum=1 rem=1 bindec=2+1*pow(2,3) ->=bindec=2+1*8=10
             */
           system("cls"); //limpar log
           printf("O resultado � %d\n",bindec);//mostrar resultado
           printf("Deseja fazer outra convers�o?\n"); //decis�o do usu�rio de fazer outra convers�o
           printf("1-Fazer outra convers�o\n");
           printf("2-Sair\n");
           scanf("%d", &resp1);
           if(resp1!=1){ //sair caso n�o queira fazer outra convers�o
            break;
           };
               }
           while(resp1=1); //continuar fazendo o codigo enquanto for escolhido fazer outra convers�o
           break;



     default: //caso nem uma op��o definida for escolhida
         printf("Op��o invalida \n\n"); //escrever op��o invalida

         break; //sair
                }

     system("pause"); //executa o comando pause do sistema operacional que far� o console ficar esperando por uma tecla
     return 0;

  }
