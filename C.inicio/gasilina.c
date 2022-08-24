#include <stdio.h>

int main(){

  int num,cont,numero_maior;

 numero_maior = 0;

 for (cont = 0;cont <= 15; cont++)
 {
   printf(" Diga um numero : ");
   scanf("%d",&num);
   if (num > numero_maior)
   {
   numero_maior = num;
   }
   

 }
 printf("\n numero maior : %d ",num)

}
