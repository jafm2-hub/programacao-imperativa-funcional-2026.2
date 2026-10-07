#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int a, b, i;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a <= b)
    {
        for (i = a; i <= b; i++)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (i = a; i >= b; i--)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    
    system("PAUSE");
    
    
    return 0;
}