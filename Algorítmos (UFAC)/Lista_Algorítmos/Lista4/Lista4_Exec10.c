// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec10.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   int a[20],i,soma,aux;
    
    printf("\n\n    Entre com o vetor A:\n");
    for( i=0 ; i<=19 ; i++  )
    {   
        scanf("%d" , &a[i]);
    }
    aux = 20;
    printf("\n\n    Calculando a soma\n\n");
    for (i = 1; i <= 10; i++)
    {
        soma = soma +pow(a[i] - a[aux],2);
    }
    printf("\n\n    A soma = %d",soma);
    
    getch();
    return 0;
}
