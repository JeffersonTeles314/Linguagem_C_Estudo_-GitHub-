// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec2.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int a[4][4],v[4],r[4], i , j ,soma;

    printf("Entre com o Vetor V:\n");
    for (i = 0; i <= 3; i++)
    {
        scanf("%d" , &v[i]);
    }
    printf("Lendo a Matriz A:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf("Calculando...\n");
    for( i=0 ; i<=3 ; i++)
    {
        soma = 0;
        for (j = 0; j <= 3; j++)
        {
            soma += v[j] * a[j][i];
        }
        r[i] = soma;
    }

    printf("Resultado:\n");
    for (i = 0; i <= 3; i++)
    {
        printf("%d  " , r[i]);
    }

    getch();
    return 0;
}
