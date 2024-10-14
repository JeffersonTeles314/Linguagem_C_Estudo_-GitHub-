// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec1.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int a[4][4],b[4][4],c[4][4],i,j;
    printf("Entre com a matriz A:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }

        printf("Entre com a matriz B:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &b[i][j]);
        }
    }

    printf("Somando Matrizes");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        printf("\n\n");
    }
    printf("Exibindo a matriz soma\n\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            printf(" %2d " , c[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
