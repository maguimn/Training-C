#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, salarioext, salarioTotal;
    int n, c, horaext;

    printf("Informe seu código:");
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

    printf("O salário foi: %0.2f e o salário extra foi: %0.2f portanto o salário final é: %0.2f",salario,salarioext,salarioTotal);

    return 0;
}
