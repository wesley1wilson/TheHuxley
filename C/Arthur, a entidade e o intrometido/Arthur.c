#include <stdio.h>

int main(){
    int i, j, n, linhas = 0, colunas = 0, diagonal = 0;
    scanf("%i", &n);
    int matriz[n][n];

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(i%2==0){
                linhas += matriz[i][j];
            }
        }
    }

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(j%2!=0){
                colunas += matriz[i][j];
            }
        }
    }

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(i==j){
                diagonal += matriz[i][j];
            }
        }
    }

    if(linhas > colunas && linhas > diagonal){
        printf("Arthur venceu!\n");
        printf("Resultado: %i\n", linhas);
    }
    if(colunas > linhas && colunas > diagonal){
        printf("A entidade venceu!\n");
        printf("Resultado: %i\n", colunas);
    }
    if(diagonal > linhas && diagonal > colunas){
        printf("O intrometido venceu!\n");
        printf("Resultado: %i\n", diagonal);
    }
    if(linhas == diagonal && colunas == diagonal){
        printf("Empate!\n");
        printf("Resultado: %i\n", diagonal);
    }
    return 0;
}