#include <stdio.h>
#include <stdlib.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main()
{
    float n1, n2, n3, media;
    
    system("cls");
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    media = mediaPonderada(n1, n2, n3);
    printf("Média: %.2f\n", media);
    
    exibeSituacao(media);
    
    system("PAUSE");
    return 0;
}

float mediaPonderada(float n1, float n2, float n3)
{
    return ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10.0;
}

void exibeSituacao(float media)
{
    if (media >= 5.0)
    {
        printf("Aprovado\n");
    }
    else if (media >= 3.0)
    {
        printf("Em Recuperação\n");
    }
    else
    {
        printf("Reprovado\n");
    }
}