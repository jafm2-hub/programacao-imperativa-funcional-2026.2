#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    float a, b, c;

    printf("Digite os três lados do triângulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if ((a < b + c) && (b < a + c) && (c < a + b))
    {
        printf("Os lados formam um triângulo ");
        
        if (a == b && b == c)
        {
            printf("Equilátero.\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("Isósceles.\n");
        }
        else
        {
            printf("Escaleno.\n");
        }
    }
    else
    {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }

    system("PAUSE");
    return 0;
}