#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    float salario, novo_salario, aumento;
    int codigo;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salario);

    printf("Escolha o cargo (1 = Técnico, 2 = Gerente, 3 = Demais Cargos): ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        if (salario <= 3000.0)
        {
            aumento = salario * 0.15;
        }
        else
        {
            aumento = salario * 0.10;
        }
        break;

    case 2:
        if (salario <= 5000.0)
        {
            aumento = salario * 0.10;
        }
        else
        {
            aumento = salario * 0.05;
        }
        break;

    case 3:
        aumento = salario * 0.08;
        break;

    default:
        printf("Erro: Código de cargo inválido!\n");
        aumento = 0;
        break;
    }

    if (codigo >= 1 && codigo <= 3)
    {
        novo_salario = salario + aumento;
        printf("Valor do aumento: R$ %.2f\n", aumento);
        printf("Novo salário reajustado: R$ %.2f\n", novo_salario);
    }

    system("PAUSE");
    return 0;
}