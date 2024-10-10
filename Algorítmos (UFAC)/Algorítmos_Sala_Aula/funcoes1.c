#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float media( float wa , float wb , float wc);

void main(void)
{   float a , b, c, result     ;

    a = 4.0;
    b = 5.0;
    c = 5.0;

    result = media( a , b , c);
    printf("\n\n\n       A media eh = %f " , result);
    getch();
}

float media( float wa , float wb , float wc)
{  float med;

    med = ( wa + wb +wc) / 3.0;
    return(med);
}



