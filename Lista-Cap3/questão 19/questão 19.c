#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int n, i;
    long long int t1 = 1, t2 = 1, proximo, enesimo = 1;

    printf("Digite a posição N do termo de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro: Digite um número inteiro maior que zero.\n");
    }
    else
    {
        printf("Termos da sequência de Fibonacci até a posição %d:\n", n);

        for (i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                printf("%lld", t1);
                enesimo = t1;
            }
            else if (i == 2)
            {
                printf(", %lld", t2);
                enesimo = t2;
            }
            else
            {
                proximo = t1 + t2;
                printf(", %lld", proximo);
                enesimo = proximo;
                t1 = t2;
                t2 = proximo;
            }
        }

        printf("\n\nO %dº termo da sequência é: %lld\n", n, enesimo);
    }

    
    system("PAUSE");
    
    
    return 0;
}