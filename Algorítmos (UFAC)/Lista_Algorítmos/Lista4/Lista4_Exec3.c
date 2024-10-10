#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{   int i,aux;
    float soma;
    printf("\n\n    Calculando o somatorio");
    aux  = 1;
    soma = 0;

    for( i=1 ; i<=50 ; i++)
    {    soma = soma +(aux/(float)i);
         aux  = aux + 2;
    }
    printf("\n\n   O somatorio = %f " , soma);
    getch();
}
