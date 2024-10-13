// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec1.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{   int   i, sinal;
    float  soma;
    soma = 0.0;
    printf("Calculando o Somatorio\n");
    sinal = 1;
    for(i=1 ; i<=10 ; i++)
    {
        soma = soma + sinal*(i/pow(i,2));
        sinal = sinal*(-1);
    }
    printf("O Somatório é = %f" , soma);

    getch();
    return 0;
}
