#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, s1 , sfinal;


    printf("Informe o seu salário: ");
    scanf("%f", &salario);

    if(salario <= 500){

       s1 = (salario*15)/100;
       sfinal = salario - s1;


    printf("O salario com reajuste: %0.2f",sfinal);

    }
    if ((salario > 500 )&&(salario <=1000)){

       s1 = (salario*10)/100;
       sfinal = salario - s1;

       printf("O salario com reajuste: %f",sfinal);

    }

    if (salario > 1000){

       s1 = (salario*5)/100;
       sfinal = salario - s1;

       printf("O salario com reajuste: %f",sfinal);
    }


    return 0;
}
