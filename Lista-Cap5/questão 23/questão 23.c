#include <stdio.h>
#include <stdlib.h>

#define DOBRO(x) x*2
#define DOBRO_CORRETO(x) ((x)*2)

int dobro(int x);

int main()
{
    system("cls");
    
    printf("Resultado da macro DOBRO(2+3): %d\n", DOBRO(2+3));
    printf("Resultado da função dobro(2+3): %d\n", dobro(2+3));
    printf("Resultado da macro corrigida DOBRO_CORRETO(2+3): %d\n", DOBRO_CORRETO(2+3));
    
    system("PAUSE");
    return 0;
}

int dobro(int x)
{
    return x * 2;
}