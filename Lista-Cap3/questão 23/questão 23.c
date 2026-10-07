#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int l, i, j;

    printf("Digite a dimensão do quadrado L (entre 3 e 20): ");
    scanf("%d", &l);

    if (l >= 3 && l <= 20)
    {
        for (i = 1; i <= l; i++)
        {
            for (j = 1; j <= l; j++)
            {
                if (i == 1 || i == l || j == 1 || j == l)
                {
                    printf("X");
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
        printf("Erro: Dimensão inválida! O valor deve estar entre 3 e 20.\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}