// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec7.c

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
        if ((a*a == b*b + c*c) || b*b == a*a + c*c || c*c == a*a + b*b)
        {
            printf("Triangulo Retangulo");
        }
        else
        {
            printf("Não é um Triangulo Retangulo");
        }
    }
    else
    {
        printf("Nao e um triangulo");
    }
    
    getch();
    return 0;
}
