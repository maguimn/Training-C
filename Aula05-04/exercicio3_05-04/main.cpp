#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, s1 , sfinal;
    int num;

    printf("Informe o seu número: ");
    scanf("%d", &num);

    printf("Informe o seu salário: ");
    scanf("%f", &salario);

    if(salario <= 400){

       s1 = (salario*15)/100;
       sfinal = salario + s1;


    printf("O salário antes era: R$%0.2f e com o aumento ficou : R$%0.2f",salario, sfinal);

    }
    if ((salario > 400 )&&(salario <=700)){

       s1 = (salario*12)/100;
       sfinal = salario + s1;

       printf("O salário antes era: R$%0.2f e com o aumento ficou : R$%0.2f",salario, sfinal);

    }

    if ((salario > 700)&&(salario <=1000)){

       s1 = (salario*10)/100;
       sfinal = salario + s1;

       printf("O salário antes era: R$%0.2f e com o aumento ficou : R$%0.2f",salario, sfinal);
    }

    if ((salario > 1000)&&(salario <=1800)){

       s1 = (salario*7)/100;
       sfinal = salario + s1;

       printf("O salário antes era: R$%0.2f e com o aumento ficou : R$%0.2f",salario, sfinal);
    }


    if ((salario > 1800)&&(salario <=2500)){

       s1 = (salario*4)/100;
       sfinal = salario + s1;

       printf("O salário antes era: R$%0.2f e com o aumento ficou : R$%0.2f",salario, sfinal);
    }

      if (salario > 2500){

       printf("Seu salário é maior que R$2.500,00 por isso não sofreu aumento.");
    }

    return 0;
}
