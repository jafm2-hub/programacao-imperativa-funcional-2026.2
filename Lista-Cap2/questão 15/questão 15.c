#include <stdio.h>
#include <math.h>

int main()
{
    float n1, n2, n3 ,n4, mediaS, mediaP;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);
    
mediaS = (n1 + n2 + n3 + n4) / 4;
    mediaP = ((n1 * 1) + (n2 * 1) + (n3 * 2) + (n4 * 2)) / (1 + 1 + 2 + 2);


    printf("Média: %.2f \nMédia Ponderada: %.2f", mediaS, mediaP);
    return 0;
}