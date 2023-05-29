#include <stdio.h>

int main()
{
    int nota1,nota2,nota3,nota4;
    printf("Digite a nota 1 do aluno: ");
    scanf("%d",&nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%d",&nota2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%d",&nota3);
    printf("Digite a nota 4 do aluno: ");
    scanf("%d",&nota4);
    float notas[] = {nota1, nota2, nota3, nota4};
    float media = (notas[0] + notas[1] + notas[2] + notas[3])/4;
    if (media >= 6 && media <= 10){
        printf("Está Aprovado(a), Não Fez Mais que Sua Obrigação");
    }else{if (media <= 6 && media >= 0)
        {
        printf("Está Reprovado(a), Você é uma Desgraça");
        }
    else{
        printf("Valores Inválidos");
        }   
        }
    return 0;
}