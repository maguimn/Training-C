#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
int n1, n2, n3, troca;

     printf("Digite o primeiro numero: ");
     scanf("%d", &n1);
     printf("Digite o segundo  numero: ");
     scanf("%d",&n2);
     printf("Digite o terceiro numero: ");
     scanf ("%d", &n3);

    if( n1 > n2 )
    {
        troca = n2;
        n2 = n1;
        n1 = troca;
    }
    if( n2 > n3 )
    {
        troca = n3;
        n3 = n2;
        n2 = troca;
    }
    if( n1 > n2)
    {
        troca = n2;
        n2 = n1;
        n1 = troca;
    }

    printf("\n%d, %d, %d\n\n",n1,n2,n3);

    return(0);
}
