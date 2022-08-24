#include <stdio.h>

int main(){


    int num;

    printf("digite um numero : ");
    scanf("%d", &num);
  while (num!=0)
  {
      printf("\nO numero lido foi : %d\n\n", num);
      printf("\nDigite um numero : ");
      scanf("%d", &num);
  }
   
}