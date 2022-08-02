#include <stdio.h>
#include <stdlib.h>

int main() {
    int k, i, j;
    int matriz[4][4];
    
    while(1){
        scanf("%i", &k);
        if(k == 0){break;}
        for(i=0;i<4;++i){
            for(j=0;j<4;++j){
                scanf("%i", &matriz[j][i]);
            }
        }

        for(j=0;j<4;++j){
            for(i=0;i<4;++i){
                if(i==j){
                    printf("%i ", matriz[j][i]*k);
                }else{
                    printf("%i ", matriz[j][i]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}