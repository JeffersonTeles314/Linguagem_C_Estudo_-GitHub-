// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec2.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int    a ,b ,c ,delta;
    float  x1, x2;

    printf("Entre com o coeficiente A:");\
    scanf("%d" , &a);
    printf("Entre com o coeficiente B:");\
    scanf("%d" , &b);
    printf("Entre com o coeficiente C:");\
    scanf("%d" , &c);
    delta = (float) (b * b) - 4 * a * c;
    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        printf("As raízes da equação são: %f e %f" , x1 , x2);
    }
    else
    {
        if (delta == 0)
        {
            x1 = -b / 2 * a;
            printf("A raiz da equação é: %f" , x1);
        }
        
        printf("A equação não possui raízes reais");
    }

    getch();
    return 0;
}
