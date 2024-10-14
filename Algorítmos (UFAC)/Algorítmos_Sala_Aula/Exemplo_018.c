#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main(void)
{
    int i , j , mat[3][3];
    printf("\n\n Gerando uma matriz de números aleatorios\n\n");
    srand(time(NULL));           // mudando a semente do gerador de números aleatórios

    for (i = 0; i <3 ; i++)
    {  for(j=0 ; j<3 ; j++)
       {
           mat[i][j] = rand()% 100;                             // gera um número aleatório
       }
    }
    for (i = 0; i <3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
           printf(" %.2d ", mat[i][j] );                             // gera um número aleatório

        printf("\n");
    }
    getch();
}
