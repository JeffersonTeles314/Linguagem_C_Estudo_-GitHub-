// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec8.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int a[4][4],simetrica,i,j;
    
    printf("\n\n    Entre com a matriz A:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }
    simetrica = 1;

    for( i=0 ; i<=3 ; i++)
    {   for( j=0 ; j<=3 ; j++)
        {
            if( a[i][j] != a[j][i] )
            {
                simetrica = 0;
            }
        }
    }
    if (simetrica == 1)
    {
        printf("\n\n    A matriz e simetrica");
    }
    else
    {
        printf("\n\n    A matriz nao e simetrica");
    }

    getch();
    return 0;
}
