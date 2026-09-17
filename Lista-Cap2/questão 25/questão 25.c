#include <stdio.h>

int main()
{
    float salarioBase, salarioLiq, salarioAd, salarioImp;

    printf("Digite o salario-base: R$ ");
    scanf("%f", &salarioBase);

    salarioAd = salarioBase * 0.05f;
    salarioImp = salarioBase * 0.07f;                                                                    
    salarioLiq = salarioBase + salarioAd - salarioImp;

    printf("Salario liquido a receber: R$ %.2f\n", salarioLiq);

    return 0;
}