#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{
    int i,aux;

    printf("\n\n Gerando 10 valores aleatorios entre 0 e 100:\n\n");

    srand(time(NULL));           // mudando a semente do gerador de n�meros aleat�rios

    for (i = 1; i <= 10; i++)
    {
        aux = rand();                             // gera um n�mero aleat�rio
        printf("\n numero gerado = %d" , aux  );
        printf("\t         %d ", aux % 100);      // gerando valores aleat�rios entre zero e 100
    }

    getch();
    return 0;
}
