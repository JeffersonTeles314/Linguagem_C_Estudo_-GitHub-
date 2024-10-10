#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int i , j , aux , matriz[6][6] ;
    srand(time(NULL));           // mudando a semente do gerador de números aleatórios

    printf("\n\n Gerando uma matriz 6 x 6 de numeros aleatorios");

    for (i = 0; i <= 5; i++)
    {
        for( j= 0 ; j<= 5 ; j++ )
        {
            aux = rand();                       // gera um número aleatório
            matriz[i][j] = aux % 1000 ;          // gerando valores aleatórios entre zero e 100
        }
    }
    printf("\n\n");
    for (i = 0; i <= 5; i++)
    {
        for( j= 0 ; j<= 5 ; j++ )
        {
            printf(" %3d " ,  matriz[i][j] );
        }
        printf("\n");
    }
    getch();
    return 0;
}
