// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista3_Exec10.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int m, n, i, j, maior, menor;
    int i_maior, i_menor, j_maior, j_menor;

    printf("Entre com o n (Colunas): \n");
    scanf("%d", &n);
    printf("Entre com o m (Linhas): \n");
    scanf("%d", &m);
    
    int mtz[n][m];
    printf("Entre com a matriz MTZ: \n");
    for( i=0 ; i<=m-1 ; i++)
    {   
    printf("Insira os valores da Linha %d: \n", i+1);
    for( j=0 ; j<=n-1 ; j++ )
        {
            scanf("%d" , &mtz[i][j]);
        }
    }

    maior = mtz[0][0];
    menor = mtz[0][0];
    i_maior = 1;
    i_menor = 1;
    j_maior = 1;
    j_menor = 1;

    for(i=0; i<=m-1 ; i++)
    {   for(j=0; j<=n-1 ; j++)
        {
            if (mtz[i][j] > maior)
            {
                maior = mtz[i][j];
                i_maior = i+1;
                j_maior = j+1;
            }
            if (mtz[i][j] < menor)
            {
                maior = mtz[i][j];
                i_menor = i+1;
                j_menor = j+1;
            }
        }
    }
    printf("O maior elemento da matriz e: %d \n", maior);
    printf("Posicao %d, %d \n", i_maior, j_maior);
    printf("O menor elemento da matriz e: %d \n", menor);
    printf("Posicao %d, %d \n", i_menor, j_menor);

    getch();
    return 0;
}
