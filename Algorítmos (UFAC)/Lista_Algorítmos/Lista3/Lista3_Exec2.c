#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(void)
{   int a[4][4],at[4][4],i,j;
    printf("\n\n    Entre com a matriz A:\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            scanf("%d" , &a[i][j]);
        }
    }

    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            printf(" %2d " , a[i][j]);
        }
        printf("\n\n");
    }


    printf("\n\n    Obtendo a matriz transposta");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            at[i][j]=a[j][i];
        }
    }
    printf("\n    Exibindo a matriz transposta\n\n");
    for( i=0 ; i<=3 ; i++  )
    {   for( j=0 ; j<=3 ; j++ )
        {
            printf(" %2d   " , at[i][j]);
        }
        printf("\n\n\n");
    }



    getch();

}
