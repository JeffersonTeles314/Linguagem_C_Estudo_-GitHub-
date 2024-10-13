// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec8.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   int a[4][4],i,j,identidade;
    
    printf("\n\n    Entre com a matriz A:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }
    identidade = 1;
    
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    identidade = 0;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    identidade = 0;
                }
            }
        }   
    }
    if (identidade == 1)
    {
        printf("\n\n    A matriz e identidade");
    }
    else
    {
        printf("\n\n    A matriz nao e identidade");
    }
    
    getch();
    return 0;
}
