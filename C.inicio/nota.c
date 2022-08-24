#include <stdio.h>
#include <stdlib.h>

int main(){

 int cont,alunos;
 float nota1, nota2, nota3, media;
 alunos = 0;
for ( cont = 0; cont <= 1; cont++)
 {
     alunos = alunos + 1;
    
     printf("\nAluno %d",alunos);
     
    


     printf("\ndigite a primeira nota : \n");
     scanf("%f",&nota1);
    
     printf("\ndigite a segunda nota : \n");
     scanf("%f", &nota2);
     
     printf("\ndigite a terceira nota : \n");
     scanf("%f", &nota3);
     
      media = (nota1+nota2+nota3)/3;
      printf("A media do aluno : %.1f\n",media);
     if (media>=7){
        printf("\nAPROVADO!!!\n");
        getc(stdin);
     }else
     {
        printf("\nREPROVADO!!!!\n");
        
     }
      
     
    
 }



}