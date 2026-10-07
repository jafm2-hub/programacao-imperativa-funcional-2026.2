#include <stdio.h>
#include <stdlib.h>

int main() 

{

    float nota, maior = -1.0, menor = 11.0, soma = 0.0, media;
    int total = 0;

    printf("Digite a nota do aluno (ou -1.0 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0)
    {
        if (nota >= 0.0 && nota <= 10.0)
        {
            total++;
            soma += nota;

            if (nota > maior)
            {
                maior = nota;
            }
            if (nota < menor)
            {
                menor = nota;
            }
        }
        else
        {
            printf("Nota inválida! Digite um valor entre 0.0 e 10.0.\n");
        }

        printf("Digite a nota do aluno (ou -1.0 para encerrar): ");
        scanf("%f", &nota);
    }

    if (total > 0)
    {
        media = soma / total;
        printf("\n--- ESTATÍSTICAS DA TURMA ---\n");
        printf("Total de alunos avaliados: %d\n", total);
        printf("Maior nota da turma: %.2f\n", maior);
        printf("Menor nota da turma: %.2f\n", menor);
        printf("Média geral da turma: %.2f\n", media);
    }
    else
    {
        printf("\nNenhuma nota válida foi inserida.\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}