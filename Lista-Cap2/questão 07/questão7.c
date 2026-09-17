#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Digite o dia, mês e ano, separando-os por uma barra: ");
    scanf("%d/%d/%d", &dia, &mes, &ano );

    printf("\n%d/%d/%d", ano, mes, dia);


    return 0;
}