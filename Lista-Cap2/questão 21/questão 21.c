#include <stdio.h>

int main()
{
    char caractere;

    printf("Digite um caractere: ");
    /* O espaço antes de %c ignora eventuais caracteres invisíveis (como o Enter) no buffer */
    scanf(" %c", &caractere);

    printf("\nCaractere digitado: %c\n", caractere);
    printf("Codigo ASCII (inteiro): %d\n", caractere);

    return 0;
}