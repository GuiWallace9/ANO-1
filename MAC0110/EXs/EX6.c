#include <stdio.h>

int contadigitos(int N, int x){
    int i,j;
    j=0;
    while(N>0){
        i=N%10;
        N=N/10;
        if(i==x) j++;
    }
    return j;    
}

int main(){
    int num1, num2;
    int x;
    int i,j;
    int aux;
    printf("Digite os dois números \n");
    scanf("%d %d", &num1, &num2);

    aux=num1;

    while(aux>0){
        x=aux%10;
        aux=aux/10;
        i=contadigitos(num1,x);
        j=contadigitos(num2,x);
        if(i!=j){
            printf("NÃO É PERMUTAÇÃO! \n");
            return 0;
        }

    }
    printf("É PERMUTAÇÃO! \n");
    return 0;


}
