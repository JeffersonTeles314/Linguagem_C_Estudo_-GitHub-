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
    int    i;
    
    printf("Escrevando Numeros: \n");\
    for (i = 1; i <= 6; i++)
    {
        printf("%f \n",(1.0/(i*i)));
    }
    getch();

    return 0;
}
