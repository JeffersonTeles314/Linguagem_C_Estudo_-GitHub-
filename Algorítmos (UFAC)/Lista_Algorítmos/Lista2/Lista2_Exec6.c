// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista2_Exec5.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{   setlocale(LC_ALL, "Portuguese");
    int    ant1, ant2,prox, i;
    ant1 = 1;
    ant2 = 1;
    printf("%d\n",ant1);
    printf("%d\n",ant2);

    for (i = 1; i <= 18; i++)
    {
        prox = ant1 + ant2;
        printf("%d\n",prox);
        ant1 = ant2;
        ant2 = prox;
    }
    getch();

    return 0;
}
