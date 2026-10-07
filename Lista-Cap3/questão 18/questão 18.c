#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int num, temp, invertido = 0, digito;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0)
    {
        digito = temp % 10;
        invertido = (invertido * 10) + digito;
        temp /= 10;
    }

    printf("Número original: %d\n", num);
    printf("Número invertido: %d\n", invertido);

    
    system("PAUSE");
    
    
    return 0;
}