#include <stdio.h>
#include <math.h>

int main()
{

    float salarioBruto, salarioLiquido, imposto;
    int dias;

    printf("Digite os dias trabalhados: ");
    scanf("%d", &dias);

    salarioBruto = dias * 30.0;
    imposto = salarioBruto * 0.08;
    salarioLiquido = salarioBruto - imposto;

    printf("Salário Bruto: %.2f \nSalário Liquido: %.2f\n", salarioBruto, salarioLiquido);

    return 0;
}