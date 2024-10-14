// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec12.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int vetor[20], maior, menor, i;

    printf("Entre com o vetor: \n");
    for( i=0 ; i<=19 ; i++)
    {   
        scanf("%d" , &vetor[i]);
    }
    maior = vetor[0];
    menor = vetor[0];
    
    for (i = 1; i <= 19; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        else
        {
            if (vetor[i] < menor)
            {
                menor = vetor[i];
            }   
        }
    }
    
    printf("O Maior e: %d \n", maior);
    printf("O Menor e: %d \n", menor);

    getch();
    return 0;
}
