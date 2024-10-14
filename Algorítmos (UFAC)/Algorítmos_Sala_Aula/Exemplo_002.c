
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
       setlocale(LC_ALL,"portuguese");

       int num;

       num = 4;

       printf("\n   %d  elevado ao quadrado =  %d " , num , num*num );

       getch();
}
