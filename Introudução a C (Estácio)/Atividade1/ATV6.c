#include <stdio.h>

int main() {
    char primeiraString[100];
    char segundaString[100];

    printf("Digite a primeira string: ");
    scanf("%s", primeiraString);

    printf("Digite a segunda string: ");
    scanf("%s", segundaString);

    printf("Primeira string: %s\n", primeiraString);
    printf("Segunda string: %s\n", segundaString);

    printf("Segunda letra da primeira string: %c\n", primeiraString[1]);
    printf("Segunda letra da segunda string: %c\n", segundaString[1]);

    return 0;
}