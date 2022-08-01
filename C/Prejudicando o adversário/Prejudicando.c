#include <stdio.h>

int main(){
    int n, i, j;
    scanf("%i", &n);
    int matriz[n][n];

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%i", &matriz[j][i]);
            if(matriz[j][i]<0){
                matriz[j][i] *= 2;
            }
        }
    }
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(j==n-1){
                printf("%i", matriz[i][j]);
            }else{
                printf("%i ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}