// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec12.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   int a[7][7],i,j;
    
    printf("Gerando a Matriz de PAscal de Ordem 7:\n");
    for( i=0 ; i<=6 ; i++  )
    {   for( j=0 ; j<=6 ; j++ )
        {
            if (i==j || j==0)
            {
                a[i][j] = 1;
            }
            else
            {
                if (i<j)
                {
                    a[i][j] = 0;
                }
                else
                {
                    a[i][j] = a[i-1][j-1] + a[i-1][j];
                }
                
            }
        }
    }
    printf("\n\n    Exibindo a matriz\n\n");
    for (i = 0; i <= 6; i++)
    {
        for (j = 0; j <= 6; j++)
        {
            printf(" %2d " , a[i][j]);
        }
        printf("\n");
    }
    getch();
    return 0;
}
