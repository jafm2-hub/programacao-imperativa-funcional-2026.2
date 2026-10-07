#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int num, i;
    int encontrou = 0;

    printf("Digite um número limite positivo (NUM): ");
    scanf("%d", &num);

    printf("Múltiplos de 3 e 5 no intervalo de 1 a %d:\n", num);

    for (i = 1; i <= num; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou)
    {
        printf("Nenhum número satisfaz a condição.");
    }
    printf("\n");

    
    system("PAUSE");
    
    
    return 0;
}