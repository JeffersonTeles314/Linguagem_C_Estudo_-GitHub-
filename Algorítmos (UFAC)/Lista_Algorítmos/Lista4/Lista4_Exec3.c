// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec3.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int i,aux;
    float soma;
    printf("\n\n    Calculando o somatorio");
    aux  = 1;
    soma = 0;

    for( i=1 ; i<=50 ; i++)
    {    soma = soma +(aux/(float)i);
         aux  = aux + 2;
    }
    printf("\n\n   O somatorio = %f " , soma);

    getch();
    return 0;
}
