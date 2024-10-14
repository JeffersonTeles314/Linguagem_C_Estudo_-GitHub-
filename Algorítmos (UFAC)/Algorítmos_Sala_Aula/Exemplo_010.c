#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <math.h>
main()
{
     setlocale(LC_ALL,"portuguese");

     int rotacion , i;

   	 printf("\n Entre com a quantidade de rotações:");
   	 scanf("%d", &rotacion);
   	 i = 1;
   	 while( i  <= rotacion  )
   	 {
       	 	printf("\n      Rotação(%d)" , i);
        		i=i+1;
   	 }
   	 getch();
}
