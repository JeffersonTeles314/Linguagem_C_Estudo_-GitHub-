// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec8.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    i, contador, soma;
    float media;

    soma = 0;
    contador = 0;

    for (i = 52;i <= 98;i++)
    {
        soma += i;
        contador++;
    }

    media = soma / (float)contador;
    printf (  "A média dos números de 52 a 98 é: %.2f", media);

    getch();
    return 0;
}
