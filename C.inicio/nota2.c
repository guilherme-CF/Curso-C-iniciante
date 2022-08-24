#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota[5],soma,media;
    int posicao;
    for ( posicao = 1; posicao <=20; posicao++)
    {
       printf(" Digite as notas : ");
       scanf("%f", &nota[posicao]);
       soma = soma + nota[posicao];
    }
    media = soma/20;
    for ( posicao = 1; posicao <=20; posicao++)
    {
        if (nota[posicao] >= media)
        {
           printf("\nvocê esta passou ");
           printf("%.2f\n", nota[posicao]);
        }
        
    }
    
}