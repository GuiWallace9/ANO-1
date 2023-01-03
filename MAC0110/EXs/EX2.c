#include <stdio.h>
/*Problema: Dado um inteiro positivo n (tamanho de uma sequˆencia) e uma sequˆencia de n
n´umeros inteiros, imprimir o maior n´umero da sequˆencia.*/
int main(){
    int N;
    double x,y;

    printf("Digite a quantidade de números: \n");
    scanf("%d",&N);

    printf("Digite o númeto \n");
    scanf("%lf", &x);

    while(N>1){
        printf("Digite o númeto \n");
        scanf("%lf", &y);

        if(y>x) x=y;

        N--;
    }
    printf("O maior número da sequência é: %lf \n", x);

    return 0;
}
