#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int n, i;
    long long int fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Erro: Número inválido! Não existe fatorial para números negativos.\n");
    }
    else
    {
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("Fatorial de %d (%d!) = %lld\n", n, n, fatorial);
    }

    
    system("PAUSE");
    
    
    return 0;
}