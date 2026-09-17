#include <stdio.h>

int main()
{
    
    const float PI = 3.141593;
    float graus, radianos;

    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("\n%.2f graus equivalem a %.4f radianos.", graus, radianos);

    return 0;
}