// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec6.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    a,b,c;
    printf("Entre com os lados de um triangulo \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    if (a<b+c && b<a+c && c<a+b)
    {
        if (a==b && b==c)
        {
            printf("Triangulo Equilatero");
        }
        else
        {
            if (a==b || b==c || a==c)
            {
                printf("Triangulo Isosceles");
            }
            else
            {
                printf("Triangulo Escaleno");
            }
        }
    }
    else
    {
        printf("Nao e um triangulo");
    }
    
    getch();
    return 0;
}
