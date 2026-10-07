#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int a, b, i, j, divisores;
    long long int soma_primos = 0;

    do
    {
        printf("Digite o valor de A (positivo): ");
        scanf("%d", &a);
        printf("Digite o valor de B (maior que A): ");
        scanf("%d", &b);

        if (a >= b || a <= 0)
        {
            printf("Valores inválidos! Certifique-se de que A > 0 e A < B.\n\n");
        }
    } while (a >= b || a <= 0);

    printf("\nNúmeros primos no intervalo [%d, %d]:\n", a, b);

    for (i = a; i <= b; i++)
    {
        divisores = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }

        if (divisores == 2)
        {
            printf("%d ", i);
            soma_primos += i;
        }
    }

    printf("\n\nSoma total dos números primos encontrados: %lld\n", soma_primos);

    
    system("PAUSE");
    
    
    return 0;
}