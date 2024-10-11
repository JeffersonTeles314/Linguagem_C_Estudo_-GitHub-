// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec10.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    n, i, aux, soma;
    float media;
    printf("Entre com a quantidade de números: ");
    scanf("%d", &n);
    soma = 0;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &aux);
        soma += aux;
    }
    media = soma/n;
    printf("A média dos números é: %.2f", media);
    
    getch();
    return 0;
}
