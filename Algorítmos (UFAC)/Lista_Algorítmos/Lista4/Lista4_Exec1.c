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
{   int    sinal , i ;
    float  soma, pi;

    printf("Calculando valor de PI\n");

    sinal = 1;
    soma = 0.0;
    for( i=1 ; i<=51 ; i++)
    {
        soma = soma +sinal*( 1/pow(2*i-1,3) );
        sinal = sinal*(-1);
    }
    pi = pow(soma*32,1.0/3);
    printf("O valor de PI = %f" , pi);

    getch();
    return 0;
}
