// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec9.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int i, n, x, indicie;

    printf("Entre com o n: \n");
    scanf("%d", &n);
    int vetor[n];
    printf("Entre com o vetor de n elementos: \n");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &vetor[i]);
    }
    printf("Entre com o X: \n");
    scanf("%d", &x);
    indicie = -1;
    for (i = 0; i <= n - 1; i++)
    {
        if (vetor[i] == x)
        {
            indicie = i;
        }
    }
    if (indicie == -1)
    {
        printf("O valor de X nao esta presente no vetor\n");
    }
    else
    {
        printf("O valor de X esta presente no vetor na posicao %d\n", indicie+1);
    }

    getch();
    return 0;
}
