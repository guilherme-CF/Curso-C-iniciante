#include <stdio.h>
#include <stdlib.h>

int main(){

  float reajuste,salario,new_salario,maior_salario,soma;
  int cont;
  maior_salario,cont = 0;
  
  //new_salario = reajuste* salario/100
  printf("\nValor do reajuste : ");
  scanf("%f",&reajuste);
    for (cont = 1;cont<=2;cont++)
 {
    
    printf("\nInforme o valor do seu salario: R$ ");
    scanf("%f", &salario);

    soma = (reajuste * salario)/100;
    new_salario = soma + salario;

    printf("\nEsse é o valor do novo salario : %.2f \n",new_salario);
      if (new_salario > maior_salario)
      {
         maior_salario = new_salario;
      }
      
 }
 
  printf("\nO maior salario foi : R$ %.2f\n",maior_salario);

}