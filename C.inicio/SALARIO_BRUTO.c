#include <stdio.h>
#include <stdlib.h>

int main(){


    float salario_bruto,salario_liquido,imposto,total_bruto=0,total_liquido=0,total_imposto=0;
    int cont=1,funcionarios = 1;
    while (cont<=3)
    {
        printf("\nSalario bruto : \n");
        scanf("%f",&salario_bruto);
        if (salario_bruto > 999)
        {
            imposto = salario_bruto * 0.10;
        }else
          if (salario_bruto >1999)
          {
             imposto = salario_bruto * 0.15;
          }else
            if (salario_bruto > 9999)
            {
                imposto = salario_bruto * 0.20;
            }
            salario_liquido = salario_bruto -imposto;
             
         printf("Salario Liquido : %.2f \n",salario_liquido);
         total_bruto = total_bruto + salario_bruto;
         total_liquido = total_liquido + salario_liquido;
         total_imposto = total_imposto + imposto;
         cont++;  
    }
    printf("\n Total salario bruto : %.2f \n",total_bruto);
    printf("\n Total salario liquido : %.2f \n",total_liquido);
    printf("\n Total  salario imposto : %.2f \n",total_imposto);
    
}