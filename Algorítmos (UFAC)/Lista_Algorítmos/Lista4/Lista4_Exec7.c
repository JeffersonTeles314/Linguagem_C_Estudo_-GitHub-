// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec7.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{   int   aux , sinal , i ;
    float soma;
    printf("\n\n    Calculando o somatorio");
    aux   = 1000;
    sinal = -1;
    soma  = 0.0;
    for( i=1 ; i<=50 ; i++)
    {
        soma = soma +sinal*( (float)aux/i );
        aux  = aux -3;
        sinal = sinal*(-1);
    }
    printf("\n\n  O somatorio = %f" , soma);
    getch();
}
