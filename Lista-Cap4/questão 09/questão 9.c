#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    
    float lab, semestral, final, media;

    printf("Nota do Trabalho de Laboratório (peso 2): ");
    scanf("%f", &lab);
    printf("Nota da Avaliação Semestral (peso 3): ");
    scanf("%f", &semestral);
    printf("Nota do Exame Final (peso 5): ");
    scanf("%f", &final);

    media = ((lab * 2.0) + (semestral * 3.0) + (final * 5.0)) / 10.0;
    
    printf("Média Ponderada: %.2f\n", media);

    if (media >= 5.0)
    {
        printf("Situação: Aprovado\n");
    }
    else if (media >= 3.0)
    {
        printf("Situação: Em Recuperação\n");
    }
    else
    {
        printf("Situação: Reprovado\n");
    }

    system("PAUSE");
    return 0;
}