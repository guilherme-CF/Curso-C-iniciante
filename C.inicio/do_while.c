#include <stdio.h>
#include <stdlib.h>

int main (){

    int num,suce ,antces;
    

   do
   {
       printf("Digite um numero : \n");
       scanf("%d", &num);
       

      if (num!=0 && num!=9)
      {
        
         if (num%2==0){
             printf("%d é um numero PAR", num);
             suce = num + 1;
             printf(" e o sucessor : %d \n\n",suce);
         }else{
          printf("%d é um numero IMPAR", num);
           antces = num - 1;
          printf(" e o antercessor : %d \n\n" ,antces);
         }

      }
      
   } while (num!=0 && num!=9);

}