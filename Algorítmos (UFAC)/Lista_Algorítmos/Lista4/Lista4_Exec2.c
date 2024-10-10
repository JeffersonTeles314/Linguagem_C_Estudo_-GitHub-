#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{   int    n , i , aux;
    float  soma;

    printf("\n\n    Calculando o Somatorio");

    printf("\n\n    Entre com o N:");
    scanf("%d" , &n);
    soma = 0.0;
    for( i=1 ; i<=n ; i++)
    {
        soma = soma + i/((n+1.0)-i);
    }
    printf("\n\n   O somatorio = %f" , soma);

    getch();
}
