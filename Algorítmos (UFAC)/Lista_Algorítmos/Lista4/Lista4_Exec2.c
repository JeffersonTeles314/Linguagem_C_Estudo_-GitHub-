// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec2.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int    n, i;
    float  soma;

    printf("\n\n    Calculando o Somatorio");

    printf("\n\n    Entre com o N:");
    scanf("%d" , &n);
    soma = 0.0;
    for( i=1 ; i<=n ; i++)
    {
        soma = soma + i/((n+1.0)-i);
    }
    printf("\n\n   O somatorio = %f" , soma);

    getch();
    return 0;
}
