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


    printf("\n A nota 1 obtida �: %0.2f \n a nota 2 obtida �: %0.2f \n a nota 3 obtida �: %0.2f \n a nota 4 obitda �: %0.2f" ,n1,n2,n3,n4,media);

    printf("\n A sua m�dia �: %0.2f", media);

    if(media == 10)
        {
        printf("\n\n Parab�ns voc� obteve a nota m�xima!!!");
    }

    else if(media >= 6)
    {
        printf("\n\n voc� foi aprovado", media);
    }

    else if(media >=3 && media <6)
        {
        printf("\n\n voc� est� de recuper�o!");
    }
    else
        {
    printf("\n\n voc� foi reprovado"), media;
    }

    printf("\n\n\n");
    return 0;
}
