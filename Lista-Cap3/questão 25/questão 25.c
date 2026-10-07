#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int n, i, divisores = 0;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                divisores++;
            }
        }

        printf("Quantidade de divisores encontrados: %d\n", divisores);

        if (divisores == 2)
        {
            printf("Conclusão: O número %d É PRIMO.\n", n);
        }
        else
        {
            printf("Conclusão: O número %d NÃO É PRIMO.\n", n);
        }
    }
    else
    {
        printf("Erro: O número deve ser positivo.\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}