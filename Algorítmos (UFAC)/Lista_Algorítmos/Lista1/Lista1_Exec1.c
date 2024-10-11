// Nome do Aluno(a): Jefferson Vasconcelos Teles de Almeida
// Disciplina......: CCET005 - Algoritmos e Linguagem de Programação
// IFES............: Universidade Federal do Acre
// Data............: 25/10/2024				Hora:
// Nome do Programa: Lista1_Exec1.c

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{   setlocale(LC_ALL, "Portuguese");
    int    base , altura;
    float  area;
    
    printf("Entre com a Base do Triângulo: ");\

    scanf("%d" , &base);
    printf("Entre com a Altura do Triângulo: ");\
    scanf("%d" , &altura);
    area = (float) (base * altura) / 2;
    printf("A área do Triângulo = %f" , area);

    getch();
    return 0;
}
