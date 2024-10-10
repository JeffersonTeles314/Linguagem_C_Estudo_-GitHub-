//*********************************************
float media( float wa , float wb , float wc)
{  float med;

    med = ( wa + wb +wc) / 3.0;
    return(med);
}
//*********************************************
//*********************************************

void cabecalho(void)
{
    printf("\n Ufac");
    printf("\n Universidade Federal do Acre");
    printf("\n Endereco: Distrito Industrial      Tel: 68-224-5432");
    printf("\n Rio Branco - Acre");

}
//****************************************************
//****************************************************



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
//****************************************************
//****************************************************
int dobro( int x)
{
    return(2*x);
}

//****************************************************
//****************************************************

int triplo( int x)
{
    return(3*x);
}
