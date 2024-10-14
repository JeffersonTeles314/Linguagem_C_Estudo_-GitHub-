// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista4_Exec13.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{   int a[4][4],i,j;
    
    printf("Gerando Matriz de SKYFALL: \n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            if ((i+j)%2 == 1)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
        }
    }
    printf("Exibindo a matriz SKYFALL: \n");
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("%d " , a[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}
