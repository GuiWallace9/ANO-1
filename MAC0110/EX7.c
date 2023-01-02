#include <stdio.h>
#define MAX 256

void leMat(int mat[MAX][MAX], int lin, int col){
    int i,j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMat(int mat[MAX][MAX], int lin, int col){
    int i, j;
    for(i=0;i<lin;i++){
        for(j=0;j<col;j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int valor;
    int i,j;
    int lin, col;
    int mat[MAX][MAX];
    int aux;

    printf("Digite a quantidade de linhas e colunas: \n");
    scanf("%d %d", &lin, &col);

    if(lin!=col){
        printf("NÃO É UM QUADRADO MÁGICO! \n");
        return 0;
    }

    leMat(mat,lin,col);
    printMat(mat,lin,col);

    valor=0;
    aux=0;

    for(i=0;i<col;i++){
        valor=valor+mat[1][i];
    }

    for(i=1;i<lin;i++){
        for(j=0;j<col;j++){
            aux=aux+mat[i][j];
        }
        if(aux!=valor){

            printf("1 \n");
            printf("NÃO É QUADRADO MÁGICO! \n");
            return 0;
        }
        aux=0;
    }

    for(i=0;i<col;i++){
        for(j=0;j<lin;j++){
            aux=aux+mat[j][i];
        }
        if(aux!=valor){
            printf("2 \n");
            printf("NÃO É QUADRADO MÁGICO! \n");
            return 0;
        }
        aux=0;
    }

    i=0;
    j=0;
    while(i<lin && j<col){
        aux=aux+mat[i][j];
        i++;
        j++;
    }

    if(aux!=valor){
        printf("3 \n");
        printf("NÃO É QUADRADO MÁGICO! \n");
        return 0;
    }

    aux=0;
    for(i=0;i<lin;i++){
        aux=aux+mat[i][lin-1-i];
    }

    if(aux!=valor){
        printf("3 \n");
        printf("NÃO É QUADRADO MÁGICO! \n");
        return 0;
    }


    printf("É QUADRADO MÁGICO! \n");

    printf("%d \n", valor);

    return 0;

}
