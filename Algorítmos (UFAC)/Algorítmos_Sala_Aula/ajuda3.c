#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int i , j , aux , vetor[20] ;
    srand(time(NULL));           // mudando a semente do gerador de n�meros aleat�rios

    printf("\n\n Gerando um vetor de 20 de numeros aleatorios");

    for (i = 0; i <= 19  ; i++)
    {
            aux = rand();                       // gera um n�mero aleat�rio
            vetor[i] = aux % 100 ;          // gerando valores aleat�rios entre zero e 100

    }
    printf("\n\n");
    for (i = 0; i <= 19; i++)
    {
            printf("%d " ,  vetor[i]);
    }
    getch();
    return 0;
}
