#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
main()
{
    	setlocale(LC_ALL,"portuguese");

    	float area, raio = 5.0;

        area = (3.1415)* raio * raio;
        printf("\n    Área  =   %f" , area);

        getch();
}
