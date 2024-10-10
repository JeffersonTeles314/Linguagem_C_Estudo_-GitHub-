#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <moises.h>
float media( float wa , float wb , float wc)
{  float med;

    med = ( wa + wb +wc) / 3.0;
    return(med);
}

void cabecalho(void)
{
    printf("\n Ufac");
    printf("\n Universidade Federal do Acre");
    printf("\n Endereco: Distrito Industrial      Tel: 68-224-5432");
    printf("\n Rio Branco - Acre");

}

void main(void)
{   float a , b, c, result     ;

    a = 4.0;
    b = 5.0;
    c = 5.0;

    cabecalho();

    cabecalho();

    getch();
}




