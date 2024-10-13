// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec8.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int   aux , sinal , i ;
    float soma;
    printf("\n\n    Calculando o somatorio");
    aux   = 480;
    sinal = 1;
    soma  = 0.0;
    for( i=10 ; i<=39 ; i++)
    {
        soma = soma +sinal*( (float)aux/i );
        aux  = aux -5;
        sinal = sinal*(-1);
    }
    printf("\n\n  O somatorio = %f" , soma);
    
    getch();
    return 0;
}
