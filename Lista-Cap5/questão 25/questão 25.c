#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main()
{
    int num, den;
    
    system("cls");
    
    printf("Digite o numerador: ");
    scanf("%d", &num);
    
    printf("Digite o denominador: ");
    scanf("%d", &den);
    
    printf("MDC: %d\n", mdc(num, den));
    simplifica(num, den);
    
    system("PAUSE");
    return 0;
}

int mdc(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return mdc(b, a % b);
}

void simplifica(int num, int den)
{
    int divisor;
    
    divisor = mdc(num, den);
    printf("Fração simplificada: %d/%d\n", num / divisor, den / divisor);
}