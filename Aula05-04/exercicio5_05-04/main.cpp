#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, salariofam, valorhora;
    int numfilho, horas;

    printf("Informe o valor da sua hora: ");
    scanf("%f", &valorhora);

    printf("informe a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Informe quantos filhos menores de 14 anos você tem: ");
    scanf("%d", &numfilho);

    salario = valorhora * horas;


    if(salario <=500){
      salariofam =  10.50 * numfilho ;

        printf("O salario bruto é: R$ %0.2f e o salario familia é: R$%0.2f ", salario, salariofam);
    }

    if((salario > 500)&&(salario <=1000)){
      salariofam =  6.50 * numfilho;

        printf("O salario bruto é: R$%0.2f e o salario familia é: R$%0.2f ", salario, salariofam);
    }

     if(salario > 1000){
      salariofam =  1.50 * numfilho;

        printf("O salario bruto é: R$%0.2f e o salario familia é: R$%0.2f ", salario, salariofam);
    }


    return 0;
}
