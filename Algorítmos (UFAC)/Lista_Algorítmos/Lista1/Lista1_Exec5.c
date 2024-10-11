// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec5.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    i, n, conta1,conta2,conta3;
    printf("Entre com 10 números inteiros: ");
    conta1 = 0;
    conta2 = 0;
    conta3 = 0;
    for (i = 1; i <= 10; i++)
    {
        scanf("%d", &n);
        if (n < 10)
        {
            conta1 = conta1 + 1;
        }
        else
        {
            if (n > 10 && n < 20)
            {
                conta2 = conta2 + 1;
            }
            else
            {
                if (n > 20)
                {
                    conta3 = conta3 + 1;
                }
            }
        }
    }
    printf("Quantidade de números menores que 10: %d \n", conta1);
    printf("Quantidade de números maiores que 10: %d \n", conta2);
    printf("Quantidade de números maiores que 20: %d \n", conta3);
    
    getch();
    return 0;
}
