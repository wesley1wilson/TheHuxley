#include <stdio.h>

int main(){
    int i, j, n, a, contador = 0, linhas = 0, linhasH = 0, contadorH = 0;
    scanf("%i", &n);
    int matriz[n][n];

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            if(matriz[i][j] == 0){
                contador += 1;
            }
        }
        if(contador == (n-1)){
            linhas += 1;
        }
        contador = 0;
    }
    if(linhas == n){
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
                if(matriz[j][i] == 0){
                    contadorH += 1;
                }
            }
            if(contadorH == (n-1)){
                contadorH = 0;
                linhasH += 1;
            }
        }
    }
    int anormais = 0;
    if(linhas == linhasH && linhas > 0){
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
                if(matriz[i][j] > 1){
                    anormais += 1;
                }
            }
        }
        if(anormais > 0){
            printf("False");
        } else{
            printf("True");
        }
    } else{

        printf("False");
    }

    return 0;
}