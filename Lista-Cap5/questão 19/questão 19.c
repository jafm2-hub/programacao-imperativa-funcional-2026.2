#include <stdio.h>
#include <stdlib.h>

void contagem(int n);
void contagemCrescente(int n);

int main()
{
    int num;
    
    system("cls");
    
    printf("Digite um número positivo: ");
    scanf("%d", &num);
    
    if (num > 0)
    {
        printf("Contagem regressiva:\n");
        contagem(num);
        
        printf("\nContagem crescente:\n");
        contagemCrescente(num);
    }
    else
    {
        printf("Número inválido.\n");
    }
    
    system("PAUSE");
    return 0;
}

void contagem(int n)
{
    if (n == 0)
    {
        printf("Fogo!\n");
        return;
    }
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n)
{
    if (n == 0)
    {
        return;
    }
    contagemCrescente(n - 1);
    printf("%d\n", n);
}


/*Na contagem regressiva, o printf acontece antes da chamada recursiva, ou seja, o número 
é impresso imediatamente na fase de empilhamento. Na versão crescente, o printf fica após 
a chamada recursiva, fazendo com que a impressão só ocorra de baixo para cima, durante a 
fase de desempilhamento da memória.*/