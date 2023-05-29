#include <stdio.h>

int main() {
    char nome[100];
    int idade;
    int telefone;
    char cidade[100];

    printf("Digite o nome completo: ");
    gets(nome);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o telefone: ");
    scanf("%d", &telefone);

    printf("Digite a cidade: ");
    scanf(" %[^\n]", cidade);

    printf("\n");
    printf("Nome completo: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Telefone: %d\n", telefone);
    printf("Cidade: %s\n", cidade);

    return 0;
}
