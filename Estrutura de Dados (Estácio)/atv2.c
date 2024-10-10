#include <stdio.h>
#include <locale.h>

int analise(){
    float med;
    int faltas;
    int aulas;
    printf("Digite a Média do Aluno:\n");
    scanf("%f",&med);
    printf("Digite o Número de Faltas do Aluno:\n");
    scanf("%i",&faltas);
    printf("Digite o Número de Aulas Totais do Aluno:\n");
    scanf("%i",&aulas);

    float present = (float)aulas - (float)faltas;
    float indfalt = present/(float)aulas;
    
    if (med <= 10 && med >= 0)
    {
        if (med >= 6 && indfalt >= 0.75){
        return 1;
    }

        if (med < 6 || indfalt < 0.75){
        return 0;
    }
    }else{
        printf("Erro: Valor Inválido Inserido \n");
        return 0;
    };
}

int main(){
    int var1 = analise();
    printf("%i",var1);
    
    int aa;
    scanf("%f",aa);
}