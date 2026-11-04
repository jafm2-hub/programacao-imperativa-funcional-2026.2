#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    int a, b, c, auxiliar;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a > b)
    {
        auxiliar = a;
        a = b;
        b = auxiliar;
    }
    if (a > c)
    {
        auxiliar = a;
        a = c;
        c = auxiliar;
    }
    if (b > c)
    {
        auxiliar = b;
        b = c;
        c = auxiliar;
    }

    printf("Valores em ordem crescente: %d, %d, %d\n", a, b, c);

    system("PAUSE");
    return 0;
}