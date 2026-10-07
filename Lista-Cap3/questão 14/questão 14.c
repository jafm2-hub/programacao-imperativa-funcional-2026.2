#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int i;
    long long int soma_quadrados = 0;

    for (i = 1; i <= 100; i++)
    {
        printf("%d -> %d\n", i, i * i);
        soma_quadrados += (i * i);
    }

    printf("\nSoma total dos quadrados: %lld\n", soma_quadrados);

    
    system("PAUSE");
    
    
    return 0;
}