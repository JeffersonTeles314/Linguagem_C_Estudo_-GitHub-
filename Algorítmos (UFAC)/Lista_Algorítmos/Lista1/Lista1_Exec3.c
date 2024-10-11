// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec3.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    soma, i;
    soma = 0;
    i = 1;
    while (i<=100)
    {
        soma = soma + i;
        i = i + 1;
    }
    printf("O somatorio e igual a = %d", soma);
    getch();
    return 0;
}
