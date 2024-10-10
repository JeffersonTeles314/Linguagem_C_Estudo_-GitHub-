#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{   setlocale(LC_ALL,"portuguese");

    double b , e , resultado;

    b = 2.5888;
    e = 10.7444;
    resultado = pow( b , e);
    printf("\n\n Resultado: %f " , resultado);

    b = 2.0;

    resultado = sqrt( b );
    printf("\n\n Resultado: %f " , resultado);

    resultado = cbrt( b );
    printf("\n\n Resultado: %f " , resultado);


    getch();
}
