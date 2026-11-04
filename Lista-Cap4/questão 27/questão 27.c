#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int horas;
    float valor_total = 0.0;

    printf("Digite o tempo de permanência no estacionamento (em horas inteiras): ");
    scanf("%d", &horas);

    if (horas <= 2)
    {
        valor_total = horas * 2.00;
    }
    else if (horas <= 4)
    {
        valor_total = (2 * 2.00) + ((horas - 2) * 2.50);
    }
    else
    {
        valor_total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("\nTempo total: %d hora(s)\n", horas);
    printf("Valor final do ticket: R$ %.2f\n", valor_total);

    system("PAUSE");
    return 0;
}