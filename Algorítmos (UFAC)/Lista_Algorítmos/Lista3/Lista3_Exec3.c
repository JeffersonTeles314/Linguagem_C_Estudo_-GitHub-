// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec2.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int a[4][4],i,j,aux;
    aux = 0;
    printf("Gerando com a matriz A de Pares:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            a[i][j] = aux;
            aux = aux + 2;
        }
    }
    printf("Exibindo a matriz\n\n");
    for( i=0 ; i<=3 ; i++)
    {   for( j=0 ; j<=3 ; j++)
        {
            printf(" %2d " , a[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}
