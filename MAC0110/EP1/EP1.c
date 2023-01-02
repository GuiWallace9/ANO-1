#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int op;
    int tent,ntent;
    int uni,dez,cen;
    int num;
    int flag1,flag2,flag3;
    int numJ=0, dep=0;

    printf("Bem-vindo ao JOGO da FORCA !! \n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");

    while(op!=3){
        printf("\n");

        srand(time(NULL));

        num=rand()%1000;

        if(dep){
            printf("[ depuração = LIGADO / jogos jogados = %d ] \n 1. Continuar a jogar \n 2. Alternar modo depuração e continuar a jogar \n 3. Parar", numJ);
            printf("\n NUMERO: %d ",num);
        } else {
            printf("[ depuração = DESLIGADO / jogos jogados = %d ] \n 1. Continuar a jogar \n 2. Alternar modo depuração e continuar a jogar \n 3. Parar", numJ);
        }
        
        printf("\n");

        printf("Escolha uma opção: \n");
        scanf("%d", &op);
        printf("\n");

        if(op==3) break;

        if(op==2){
            if(dep==1) dep=0;
            else dep=1;
            continue;      
        }
        numJ++;

        uni=num%10;
        num=num/10;

        dez=num%10;
        num=num/10;
        
        cen=num%10;

        ntent=6;

        flag1=0;
        flag2=0;
        flag3=0;

        while(ntent>0){
            printf("\n");
            printf("Restam %d tentativas \n", ntent);
            printf("Sua próxima tentativa (digito de 0 a 9): \n");
            scanf("%d", &tent);
            printf("\n");

            if(!flag1){
                if(tent==uni){
                    flag1=1;
                }
            }

            if(!flag2){
                if(tent==dez){
                    flag2=1;
                }
            }

            if(!flag3){
                if(tent==cen){
                    flag3=1;
                }
            }

            /*prints*/
            printf("\n");
            if(flag3) printf("%d", cen);
            else printf(" _ ");

            if(flag2) printf("%d", dez);
            else printf(" _ ");

            if(flag1) printf("%d", uni);
            else printf(" _ ");
            printf("\n");

            ntent--;

            if(flag1 && flag2 && flag3){
                printf("\n ----------------------- \n PARABENS, VC GANHOU!! \n ----------------------- \n ");
                break;
            }
            if(ntent==0){
                printf("QUE PENA! Vc perdeu :-( \n");
            }
        }
    }
    return 0;   
}
