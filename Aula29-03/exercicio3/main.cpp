#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    if ((a < (b + c))&&(b < (a + c))&&(c < (b + a)))
        {
            if((a == b) && (b == c)){
                printf("Os valores comp�e um tri�ngulo equil�tero");
            }
            else if((a == b)||(a == c)||(b == c)){
                printf("Os valores comp�e um tri�ngulo is�celes");
            }
            else if((a != b) && (b!=c)){
                printf("Os valores comp�e um tri�ngulo escaleno");
            }

        }
            else{
                    printf("N�o comp�e um tri�ngulo");
                }

    return 0;
}
