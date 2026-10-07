#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int n, i, j;

    printf("Digite uma dimensão ímpar N (entre 3 e 19): ");
    scanf("%d", &n);

    if (n >= 3 && n <= 19 && n % 2 != 0)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i == j || j == (n - i + 1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    else
    {
        printf("Erro: Dimensão inválida! O número deve ser ímpar e estar entre 3 e 19.\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}