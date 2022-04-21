#include <stdio.h>

int main(){
    int i, j, matriz[3][3], menorval, total = 0;
    float positivos = 0, totpos = 0;

    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            scanf("%i", &matriz[i][j]);
            if(matriz[i][j] > 0){
                positivos += 1;
                totpos += matriz[i][j];
            }
        }
    }

    menorval = matriz[0][0];
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            if(matriz[i][j] < menorval){
                menorval = matriz[i][j];
            }
        }
    }
    for(i=0;i<3;++i){
        for(j=0;j<3;++j){
            if(i!=j){
                total += matriz[i][j];
            }
        }
    }

    printf("%.2f ", totpos/positivos);
    printf("%i ", menorval);

    if(menorval%2==0){
        printf("1 ");
    } else{
        printf("0 ");
    }

    printf("%i", total);
    return 0;
}