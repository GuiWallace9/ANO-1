#include <stdio.h>
/*O CÓDIGO DEFINE A PARTIR DAS COORDENADAS X E Y EM QUE QUADRANTE O PONTO SE LOCALIZA NO PLANO CARTESIANO*/
/*RESTRIÇÃO: O PONTO NÃO PODE POSSUIR COORNEDADA ZERO*/
int main(){
    double x, y;

    printf("Digite o cordenada X e Y \n");
    if(!scanf("%lf %lf", &x, &y)){
        printf("ERRO \n");
        return 0;
    }

    if(x>0  && y>0){
        printf("QUADRANTE NORDESTE \n");
    } else if(x>0){
        printf("QUADRANTE NOROESTE \n");
    } else if(y<0){
        printf("QUADRANTE SUDOESTE \n");
    } else {
        printf("QUADRANTE SUDESTE \n");
    }
    return 0;
}
