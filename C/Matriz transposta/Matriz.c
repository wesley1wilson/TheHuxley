#include <stdio.h>

int main(){
    int linha, coluna, i, j;
    scanf("%i %i", &linha, &coluna);
    int matriz[linha][coluna];

    for(i=0;i<linha;++i){
        for(j=0;j<coluna;++j){
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i=0;i<coluna;++i){
        for(j=0;j<linha;++j){
            printf("%i ", matriz[j][i]);
        }
        printf("\n");
    }

    return 0;
}