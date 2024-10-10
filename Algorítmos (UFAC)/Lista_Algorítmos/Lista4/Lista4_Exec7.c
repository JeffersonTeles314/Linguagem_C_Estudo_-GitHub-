#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{   int   aux , sinal , i ;
    float soma;
    printf("\n\n    Calculando o somatorio");
    aux   = 1000;
    sinal = -1;
    soma  = 0.0;
    for( i=1 ; i<=50 ; i++)
    {
        soma = soma +sinal*( (float)aux/i );
        aux  = aux -3;
        sinal = sinal*(-1);
    }
    printf("\n\n  O somatorio = %f" , soma);
    getch();
}
