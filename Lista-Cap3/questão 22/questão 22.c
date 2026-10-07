#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int n, i, j, num = 1;

    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &n);

    if (n > 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", num);
                num++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("Erro: O número deve ser maior que zero.\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}