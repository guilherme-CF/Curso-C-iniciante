#include <stdio.h>
#include <stdlib.h>


char genero[10],nome[20];


 
int main(void){

  int i=1;
while (i != 3){
      system("clear");
     printf("------CADASTRO----------");
     printf("\n1 - Cadastre um livro :");
     printf("\n2 - Visualizar livro");
     printf("\n3 - Sair \n");
     printf("\nQual opcao você escolhe :\n");
     scanf("%d", &i);
     system("clear");
     getchar();



 switch (i){
     case 1:
        printf ("\nDIZ O NOME DE UM livro : \n");
        scanf("%s",&nome);
        printf ("\nDIZ EM NOME DE genero : \n");
        scanf("%s",&genero);
        printf("\ncadastrado carai!!!!!!!!\n");
        getchar();
        
        
        break;
     case 2:
        printf ("nome : %s\n",&nome);
        
        printf ("genero : %s\n",&genero);
        getchar();
       
        
       break;
     case 3:
       printf ("SAI DAQUI ARROMBADO !!\n");
       getchar();
       break;
  }

}

  return 0;  
 }