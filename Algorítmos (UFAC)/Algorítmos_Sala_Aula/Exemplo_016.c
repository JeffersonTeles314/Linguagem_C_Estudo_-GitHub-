#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
main()
{   		float val,soma;
            int  num;
            num=0;
            soma=0.0;
            printf("\n\n digite valores:");
            printf("\n\n digite -1 para encerrar");

inicio:               			        // r�tulo de linha
            printf("\n\n valor:");
            scanf("%f",&val);
            if(val < 0.0)
            {      			            // se val for negativo...
    		   goto fim;         		// ...salta para fim
            }
            num++;          		    // se (val < 0.0) estas instru��es
            soma = soma + val;    		// n�o s�o executadas!
            goto inicio;      		    // salta para inicio. Criou um Loop

fim:              				        // r�tulo de lihna
            printf("\n\n m�dia: %f",soma/num);

            getch();
}
