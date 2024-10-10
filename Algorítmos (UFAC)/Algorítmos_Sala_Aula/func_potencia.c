#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

float potencia( int b , int expo)
{  int i,aux;
   float result;
   i=1;
   result =1.0;
   if( expo >=0)
   {
      while( i<= expo)
      {
         result=result*b;
         i++;
      }
      return(result);
   }
   else
   {  aux = expo*(-1);
      i=1;
      result=1.0;
      while( i<= aux)
      {
         result=result*b;
         i++;
      }
      return(1.0/result);

   }
}


int par( int a)    // verifica se a entrada eh par
{  int aux;
   aux = a % 2;
   if( aux == 0)
       return(1);
   else
       return(0);
}


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

int maior( int a , int b , int c)
{   int maior;
    if( a>b  &&   a>c     )
        maior = a;
    else
    {
        if( b>c )
            maior = b;
        else
            maior = c;
    }

    return(maior);
}

main(void)
{   int b , expo;
    float result;
    b = 2;
    expo = 2;

    result = potencia( b , expo );


    printf("\n\n %f " , result );


    getch();
}




