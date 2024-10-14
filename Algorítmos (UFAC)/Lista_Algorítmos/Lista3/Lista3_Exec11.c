// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec11.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int n, soma, i, j;
    printf("Entre com o n: \n");
    scanf("%d", &n);
    printf("Entre com a matriz m: \n");
    int m[n][n];
    for( i=0 ; i<=n-1 ; i++)
    {   
        for( j=0 ; j<=n-1 ; j++)
            {
                scanf("%d" , &m[i][j]);
            }
    }

    printf("Somando os Elementos Abaixo da Diagonal Principal: \n");

    soma = 0;
    for( i=0 ; i<=n-1 ; i++)
    {   
        for( j=0 ; j<=n-1 ; j++)
            {
                if (i>j)
                {
                    soma += m[i][j];
                }
            }
    }
    printf("A soma e: %d", soma);
    
    getch();
    return 0;
}
