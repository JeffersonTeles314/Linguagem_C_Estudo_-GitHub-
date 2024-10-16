// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec9.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    maior, menor, i, j;
    printf("Escreva 10 números inteiros: \n");

    scanf("%d", &i);
    maior = i;
    menor = i;
    for (i = 2; i <= 10; i++)
    {
        scanf("%d", &j);
        if (j > maior)
        {
            maior = j;
        }
        if (j < menor)
        {
            menor = j;
        }
    }
    printf("O maior número é: %d \n", maior);
    printf("O menor número é: %d \n", menor);

    getch();
    return 0;
}
