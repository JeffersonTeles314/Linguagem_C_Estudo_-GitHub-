#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{
    setlocale(LC_ALL,"portuguese");
   	int i;
   	printf("\n\n");
	for( i= 1 ; i<=10 ; i++  )
  	       printf(" %d ", i );

	getch();
}
