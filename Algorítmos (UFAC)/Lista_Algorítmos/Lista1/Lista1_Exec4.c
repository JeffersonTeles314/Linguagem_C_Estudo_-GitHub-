// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec4.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    n, aux;
    printf("Entre com um número NATURAL: ");
    scanf("%d", &n);

    aux = n%2;
    if (aux == 0)
    {
        printf("E Par");
    }
    else
    {
        printf("E Impar");
    }
    getch();
    return 0;
}
