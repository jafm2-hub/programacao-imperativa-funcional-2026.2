#include <stdio.h>

int main()
{

    int numero1;
    int numero2;
    int numero3;
    double media;

    printf("Primeiro número: ");
    scanf("%d", &numero1);
    printf("Segundo número: ");
    scanf("%d", &numero2);
    printf("Terceiro número: ");
    scanf("%d", &numero3);

    media = (numero1 + numero2 + numero3) / 3;

    printf("Média: %.2lf\n", media);
    
  

    return 0;
}