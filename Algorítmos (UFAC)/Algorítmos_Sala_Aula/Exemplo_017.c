#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int i,aux;

    printf("\n\n Gerando 10 valores aleatorios entre 0 e 100:\n\n");

    srand(time(NULL));           // mudando a semente do gerador de números aleatórios

    for (i = 1; i <= 10; i++)
    {
        aux = rand();                             // gera um número aleatório
        printf("\n numero gerado = %d" , aux  );
        printf("\t         %d ", aux % 100);      // gerando valores aleatórios entre zero e 100
    }

    getch();
    return 0;
}
