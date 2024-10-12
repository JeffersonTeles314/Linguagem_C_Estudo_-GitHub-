// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista2_Exec2.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{   setlocale(LC_ALL, "Portuguese");
    int    i, aux;
    
    printf("Escrevendo na tela do Computador: \n");\
    for (i = 1; i <= 7; i++)
    {
        aux = i%2;
        if (aux==1)
        {
            printf("%d\n", -i);
        }
        else
        {
            printf("%d\n", 2*i);
        }
    }
    getch();
    return 0;
}
