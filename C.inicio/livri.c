#include <stdio.h>
#include <stdint.h>



 
int main(void){

  struct cadastro
{
  char titulo[50],subtitulo[50],editora[50],idioma[50];
  int pagina,nota;
  float preco;

};
  

  int opcao=1;
   while (opcao != 3){
     printf("------CADASTRO----------");
     printf("\n1 - Cadastre um livro :");
     printf("\n2 - Ver livro");
     printf("\n3 - Sair \n");
     printf("\nQual opcao você escolhe :\n");
     scanf("%d", &opcao);
system("clear");
     getchar();



 switch (i){
    case 1:
         cadastro();
         getchar();
        break;
    case 2:
        visualizar();
        getchar();
        
       break;
    case 3:
       printf ("Até a proxima !!\n");
       getchar();
       break;
  }

}

  return 0;  
 }

 void cadastro(void){

  printf("\t\n-------------DADOS DO CADASTRO--------------\n");
  printf("Titulo  : ");
  fgets ("%s", &titulo[50]);
  printf("Subtitulo  : ");
  fgets ("%s", &subtitulo[50]);
  printf("Idioma : ");
  fgets ("%s", &idioma[50]);
  printf("Preço  : ");
  printf("Seu Cadatro foi feito. obrigado!!");
  system("clear");
  getchar();
   return();
}

void visualizar(void){
  
  printf("\t----VISUALIZAR LIVRO----\n\n");

  
  printf("Subtitulo  : %s \n", &subtitulo[50]);
 
  printf("Editora  : %s \n", &editora[50]);


   return;
}