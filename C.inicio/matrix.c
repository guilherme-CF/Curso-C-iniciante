#include <stdio.h>


int main (){

    int mato[4][4],matg[4][4],lin,col;
    for (lin = 0;lin < 4; lin++ )
       for ( col = 0; col < 4; col++)
       {
           scanf("%d", &mato[lin][col]);
           matg[col][lin] = mato[lin][col];
       }
printf("matrix gerada");
    for ( lin = 0; lin < 4; lin++)
       for ( col = 0; col < 4; col++)
       {
        printf("\nElemento[%d][%d] = %d", lin,col,matg[lin][col]);
       }
       
       
}