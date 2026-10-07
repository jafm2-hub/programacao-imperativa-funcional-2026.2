#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int valor_saque;
    int n100 = 0, n50 = 0, n20 = 0, n10 = 0, n5 = 0, n2 = 0;

    printf("Digite o valor do saque em reais: R$ ");
    scanf("%d", &valor_saque);

    if (valor_saque > 0)
    {
        int restante = valor_saque;

        while (restante >= 100)
        {
            restante -= 100;
            n100++;
        }
        while (restante >= 50)
        {
            restante -= 50;
            n50++;
        }
        while (restante >= 20)
        {
            restante -= 20;
            n20++;
        }
        while (restante >= 10)
        {
            restante -= 10;
            n10++;
        }
        while (restante >= 5)
        {
            restante -= 5;
            n5++;
        }
        while (restante >= 2)
        {
            restante -= 2;
            n2++;
        }

        printf("\n--- DISTRIBUIÇÃO DAS CÉDULAS ---\n");
        printf("Cédulas de R$ 100: %d\n", n100);
        printf("Cédulas de R$  50: %d\n", n50);
        printf("Cédulas de R$  20: %d\n", n20);
        printf("Cédulas de R$  10: %d\n", n10);
        printf("Cédulas de R$   5: %d\n", n5);
        printf("Cédulas de R$   2: %d\n", n2);

        if (restante > 0)
        {
            printf("\nAtenção: Restou um saldo de R$ %d que não pode ser sacado com as cédulas disponíveis.\n", restante);
        }
    }
    else
    {
        printf("Erro: Valor de saque inválido.\n");
    }

    system("PAUSE");
    
    return 0;
}