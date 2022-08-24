#include <stdio.h>
#include <stdlib.h>

int main (){
  
  int num [4],posicao ;


    for (posicao = 0; posicao < 5;posicao ++)
    {
        printf("Digite um numero : ");
        scanf("%d", &num[posicao]);
       

    }
    for (posicao = 4; posicao>=0; posicao--)
    {
      printf("numero : %d \n", num[posicao]);
    }
    
    
    
}