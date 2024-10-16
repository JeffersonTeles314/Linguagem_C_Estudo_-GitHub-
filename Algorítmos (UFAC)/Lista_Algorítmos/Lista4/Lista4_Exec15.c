// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec15.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   int a[20] ,i, j, num, conta, aux, tot_primo;
    
    printf("Entre com a o Vetor A: \n");
    for( i=0 ; i<=19 ; i++)
    {   
        scanf("%d" , &a[i]);
    }

    tot_primo = 0;
    
    for( i=0 ; i<=19 ; i++)
    {   
        num = a[i];
        conta = 0;
        for (j = 1; j <= num; j++)
        {
            aux = num % j;
            if (aux==0)
            {
                conta++;
            }
        }
        if (conta == 2)
        {
            tot_primo++;
        }
    }

    printf("O total de primos = %d",tot_primo);    
    
    getch();
    return 0;
}
