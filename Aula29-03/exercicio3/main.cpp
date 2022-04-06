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
                printf("Os valores compõe um triângulo equilátero");
            }
            else if((a == b)||(a == c)||(b == c)){
                printf("Os valores compõe um triângulo isóceles");
            }
            else if((a != b) && (b!=c)){
                printf("Os valores compõe um triângulo escaleno");
            }

        }
            else{
                    printf("Não compõe um triângulo");
                }

    return 0;
}
