#include <stdio.h>
#include <stdlib.h>

int main() 

{

    float nota;

    do {
        printf("Digite uma nota válida (0.0 a 10.0): ");
        scanf("%f", &nota);

        if (nota < 0.0 || nota > 10.0) 
        {
            printf("Erro: Nota inválida! Tente novamente.\n");
        }
    } while (nota < 0.0 || nota > 10.0);

    printf("Nota válida digitada: %.1f\n", nota);

    
    system("PAUSE");
    
    
    return 0;
}