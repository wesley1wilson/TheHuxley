#include <stdio.h>

int main(){
    float total = 0;
    float doacao;
    int vezes = 0;
    printf("Insira os valores das doacoes:\n");
    while(1)
    {
        scanf("%f", &doacao);
        if(doacao < 0){
                break;}
        total += doacao;
        vezes += 1;
    }
    printf("Total arrecadado: %.2f\n", total);
    float media = total/vezes;
    if(media>0){
        printf("Valor medio da doacao: %.2f", total/vezes);
    }else{
        printf("Valor medio da doacao: 0.00");}
    return 0;
}
