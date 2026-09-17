#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, area;

    printf("Digite o lado a: ");
    scanf("%f", &a);
    printf("\nDigite o lado b: ");
    scanf("%f", &b);
    printf("\nDigite o lado c: ");
    scanf("%f", &c);

    p = (a + b + c) / 2.0;

    area = sqrt(p * (p - a) * (p - b) * (p - c));


    printf("Semiperímetro (p): %.2f\nÁrea do triângulo: %.2f", p, area);
    return 0;
}