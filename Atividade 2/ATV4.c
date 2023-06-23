
#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, float nota4, float nota5) {
    float media = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
    return media;
}

void verificarAprovacao(float media) {
    if (media >= 6.0) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
}

int main() {
    float nota1, nota2, nota3, nota4, nota5;
    printf("Digite as 5 notas do aluno:\n");
    scanf("%f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5);

    float media = calcularMedia(nota1, nota2, nota3, nota4, nota5);
    printf("A média do aluno é %.2f\n", media);

    verificarAprovacao(media);

    return 0;
}
