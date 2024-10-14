// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec5.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{   int   i, aux1, aux2;
    float  soma;

    aux1 = 37;
    aux2 = 38;
    soma = 0.0;
    printf("Calculando o Somatorio\n");
    for(i=1 ; i<=37 ; i++)
    {
        soma = soma + ((aux1+aux2)/i);
        aux1--;
        aux2--;
    }
    printf("O Somatório é = %f" , soma);

    getch();
    return 0;
}
