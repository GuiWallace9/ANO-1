#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    int m,n;
    int *v1,*v2;
    printf("DIGITE m E n \n");
    scanf("%d %d",&m,&n);

    v1=malloc(m*sizeof(int));
    v2=malloc(n*sizeof(int));

    for(i=0;i<m;i++){
        scanf("%d", &v1[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d", &v2[i]);
    }
    i=0;
    j=0; 
    while(i<m && j<n){
        if(v1[i]==v2[j]){
            printf(" %d ",v1[i]);
            i++;
            j++;
            continue;
        }

        if(v1[i]<v2[j]){
            printf(" %d ",v1[i]);
            i++;
        } else {
            printf(" %d ",v2[j]);
            j++;
        }
    }
    while(i<m){
        printf(" %d ",v1[i]);
        i++;
    }
    while(j<n){
        printf(" %d ",v2[j]);
        j++;
    }

    free(v1);
    free(v2);
    return 0;


}
