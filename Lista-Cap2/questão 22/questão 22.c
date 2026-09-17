#include <stdio.h>

int main()
{
    char c, maiusculo;

    printf("Digite um caractere: ");
    scanf(" %c", &c);
    
    /*printf("Caractere digitado: %d\n", c);*/

    printf("Letra Maiúscula: %c\n", c);
    printf("Letra Minúscula: %c\n", c + 32);

    return 0;
}