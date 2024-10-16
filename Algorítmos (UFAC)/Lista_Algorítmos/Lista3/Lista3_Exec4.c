// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec4.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int a[4][4], i , j ,soma;

    printf("Lendo a Matriz A:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }
    soma = 0;
    printf("Somando os Elementos da Matriz\n\n");
    for( i=0 ; i<=3 ; i++)
    {   for( j=0 ; j<=3 ; j++)
        {
            if (i==j)
            {
                soma += a[i][j];
            }
        }
        printf("\n");
    }
    printf("A soma dos elementos da matriz = %d\n\n" , soma);
    getch();
    return 0;
}
