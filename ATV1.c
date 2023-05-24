#include <stdio.h>

int main()
{
    //OBS*: Você Não Pediu o Input das Notas :)
    float notas[] = {10, 10, 10, 10};
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