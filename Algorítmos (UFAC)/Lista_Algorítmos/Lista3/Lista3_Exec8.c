// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec8.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int vetor[20], i,maior;

    printf("Entre com o Vetor V:\n");
    for (i = 0; i <= 19; i++)
    {
        scanf("%d" , &vetor[i]);
    }
    maior = vetor[0];
    for (i = 0; i <= 19; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    printf("O maior elemento do vetor V e: %d\n" , maior);

    getch();
    return 0;
}
