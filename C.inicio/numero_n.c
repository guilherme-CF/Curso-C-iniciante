#include <stdio.h>
#include <stdlib.h>

int main(){

  int cont, num, numero,soma_impar,soma_par;
  soma_impar, soma_par = 0;
  
  printf("Digite quantidade de lista : ");
  scanf("%d",&num);
    for ( cont = 1; cont<= num; cont ++ )
    {
        printf("digite um numero :");
        scanf("%d",&numero);
      if (numero%2==0)
      {
          soma_par = soma_par+numero;
      }else
      {
         soma_impar= soma_impar + numero;
      }
    }
    printf("\nA soma dos números pares = %.d\n",soma_par);
    printf("\nA soma dos números impares = %.d\n",soma_impar);


}
