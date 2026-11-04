#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    system("cls");
    
    double numero, resultado;

    printf("Digite um número real: ");
    scanf("%lf", &numero);

    if (numero >= 0)
    {
        resultado = sqrt(numero);
        printf("O número é positivo ou zero. A sua raiz quadrada é: %.2lf\n", resultado);
    }
    else
    {
        resultado = numero * numero;
        printf("O número é negativo. O seu quadrado é: %.2lf\n", resultado);
    }

    system("PAUSE");
    return 0;
}