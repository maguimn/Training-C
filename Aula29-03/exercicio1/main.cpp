#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, num4, qnum1, qnum2, qnum3, qnum4;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);



    qnum1 = num1 * num1;
    qnum2 = num2 * num2;
    qnum3 = num3 * num3;
    qnum4 = num4 * num4;

   if(qnum3  >= 1000)
  {
    printf("O valor do quadrado de, %d\n ,�, %d\n,",num3, qnum3);
  }
    else
    {
        printf("Os valores inseridos foram:\n %d\n %d\n %d\n %d \n os seus respectivos quadrados s�o: \n %d \n %d\n %d\n %d",
               num1, num2, num3, num4, qnum1, qnum2, qnum3, qnum4)
        ;
    }

    return 0;
}
