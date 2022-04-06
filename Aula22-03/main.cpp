#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");


    float n1, n2, n3, n4, media;

    printf("\n\n Informe a primeira nota: ");
    scanf("%f", &n1);

    printf("\n\n Informe a segunda nota: ");
    scanf("%f", &n2);

    printf("\n\n Informe a terceira nota: ");
    scanf("%f", &n3);

    printf("\n\n Informe a quarta nota: ");
    scanf("%f", &n4);

    media = (n1+n2+n3+n4)/4;


    printf("\n A nota 1 obtida é: %0.2f \n a nota 2 obtida é: %0.2f \n a nota 3 obtida é: %0.2f \n a nota 4 obitda é: %0.2f" ,n1,n2,n3,n4,media);

    printf("\n A sua média é: %0.2f", media);

    if(media == 10)
        {
        printf("\n\n Parabéns você obteve a nota máxima!!!");
    }

    else if(media >= 6)
    {
        printf("\n\n você foi aprovado", media);
    }

    else if(media >=3 && media <6)
        {
        printf("\n\n você está de recuperão!");
    }
    else
        {
    printf("\n\n você foi reprovado"), media;
    }

    printf("\n\n\n");
    return 0;
}
