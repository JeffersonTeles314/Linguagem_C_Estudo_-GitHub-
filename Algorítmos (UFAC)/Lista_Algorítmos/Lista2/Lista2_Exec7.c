// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista2_Exec7.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{   setlocale(LC_ALL, "Portuguese");
    int    i, n, conta, aux;
    printf("Entre com um numero natural:\n");
    scanf("%d", &n);
    conta = 0;

    for (i = 1; i <= n; i++)
    {
        aux = n%i;
        if (aux == 0)
        {
            conta++;
        } 
    }
    if (conta==2)
    {
        printf("O numero %d e primo", n);
    }
    else
    {
        printf("O numero %d nao e primo", n);
    }
    
    getch();

    return 0;
}
