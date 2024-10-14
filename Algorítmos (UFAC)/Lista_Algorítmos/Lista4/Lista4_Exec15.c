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
{   int a[4][4] ,i ,j ,skyfall;
    
    printf("Entre com a Matriz A: \n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }
    skyfall = 1;
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            if (((i+j)%2) == 1)
            {
                if (a[i][j] != 1)
                {
                    skyfall = 0;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
                    skyfall = 0;
                }  
            }
            
        }
    }
    if (skyfall == 1)
    {
        printf("A matriz e SKYFALL\n");
    }
    else
    {
        printf("A matriz nao e SKYFALL\n");
    }
    
    getch();
    return 0;
}
