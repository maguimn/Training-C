#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, salarioext, salarioTotal;
    int n, c, horaext;

    printf("Informe seu c�digo:");
    scanf("%d", &c);

    printf("Informe as horas trabalhadas: ");
    scanf("%d", &n);

    salario = n * 10;

    if(n > 50){
      horaext = n - 50;

      salarioext = horaext * 20;

    }

    else{
        horaext = 0;
        salarioext = 0;
    }
    salarioTotal = salario + salarioext;

    printf("O sal�rio foi: %0.2f e o sal�rio extra foi: %0.2f portanto o sal�rio final �: %0.2f",salario,salarioext,salarioTotal);

    return 0;
}
