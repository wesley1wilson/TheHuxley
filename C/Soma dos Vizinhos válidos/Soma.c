#include <stdio.h>

int main(){
    int i, j, n, validos = 0, total = 0;
    scanf("%i", &n);
    int matriz[n][n];

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%i", &matriz[i][j]);
        }
    }

    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            // esquerda
            if(j-1 >= 0 && j-1 < n){
                if(matriz[i][j-1] > 0){
                    total += matriz[i][j-1];
                    validos += 1;
                }
            }

            // superior
            if(i-1 >= 0 && i-1 < n){
                if(matriz[i-1][j] > 0){
                    total += matriz[i-1][j];
                    validos += 1;
                }
            }

            // direita
            if(j+1 >= 0 && j+1 < n){
                if(matriz[i][j+1] > 0){
                    total += matriz[i][j+1];
                    validos += 1;
                }
            }

            // inferior
            if(i+1 >= 0 && i+1 < n){
                if(matriz[i+1][j] > 0){
                    total += matriz[i+1][j];
                    validos += 1;
                }
            }
        }
    }

    printf("%i\n", validos);
    printf("%i\n", total);
    return 0;
}