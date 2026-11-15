#include <stdio.h>
#include <stdlib.h>

long fibonacci(int n);

int main()
{
    int qtd, i;
    
    system("cls");
    
    printf("Digite a quantidade de termos: ");
    scanf("%d", &qtd);
    
    printf("Sequência de Fibonacci:\n");
    for (i = 0; i < qtd; i++)
    {
        printf("%ld ", fibonacci(i));
    }
    printf("\n");
    
    system("PAUSE");
    return 0;
}

long fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


/*A versão recursiva do Fibonacci torna-se extremamente lenta para valores 
altos de n pois ocorre recálculo constante. Como o algoritmo não guarda na 
memória os valores já calculados, a função precisa abrir galhos inteiros de 
execução várias e várias vezes para recalcular as exatas mesmas partes da árvore 
matemática, aumentando exponencialmente o número de operações.*/