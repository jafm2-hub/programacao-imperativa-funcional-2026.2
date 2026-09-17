#include <stdio.h>

int main()
{
    float horasNormais, horasExtras, salarioBruto, imposto;

    printf("Digite a quantidade de horas normais: ");
    scanf("%f", &horasNormais);
    printf("Digite a quantidade de horas extras: ");
    scanf("%f", &horasExtras);

    salarioBruto = (horasNormais * 10) + (horasExtras * 15);
    imposto = (salarioBruto > 12000) ? (salarioBruto - 12000) * 0.10 : 0;

    printf("Salário Bruto: R$ %.2f\nImposto Retido: R$ %.2f", salarioBruto, imposto);

    return 0;
}