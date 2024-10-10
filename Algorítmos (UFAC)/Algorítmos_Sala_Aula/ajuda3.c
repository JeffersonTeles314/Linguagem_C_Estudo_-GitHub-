#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(void)
{   int i , j , aux , vetor[20] ;
    srand(time(NULL));           // mudando a semente do gerador de números aleatórios

    printf("\n\n Gerando um vetor de 20 de numeros aleatorios");

    for (i = 0; i <= 19  ; i++)
    {
            aux = rand();                       // gera um número aleatório
            vetor[i] = aux % 100 ;          // gerando valores aleatórios entre zero e 100

    }
    printf("\n\n");
    for (i = 0; i <= 19; i++)
    {
            printf("%d " ,  vetor[i]);
    }
    getch();
    return 0;
}
