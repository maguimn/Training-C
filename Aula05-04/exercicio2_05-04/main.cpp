#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int Qi;

    printf("Informe o seu QI: ");
    scanf("%d", &Qi);

    if ((Qi > 0)&&(Qi <=30)){

        printf("O seu Qi corresponde a uma Ameba");
    }

    if ((Qi > 30)&&(Qi <=50)){

        printf("O seu Qi corresponde a um Débil Mental");
    }

    if ((Qi >50)&&(Qi <=70)){

        printf("O seu Qi corresponde a uma pessoa regular");
    }

    if ((Qi >70)&&(Qi <=100)){

        printf("O seu Qi corresponde a uma pessoa normal");

    }

    if ((Qi >100)&&(Qi <=150)){

        printf("O seu Qi corresponde a de um gênio");
    }

    if (Qi > 150){
        printf("Qi Inválido");
    }

    return 0;
}
