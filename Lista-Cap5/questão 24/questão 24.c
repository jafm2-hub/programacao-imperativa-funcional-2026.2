#include <stdio.h>
#include <stdlib.h>

#define DEBUG

int somaAteN(int n);

int main()
{
    int num, resultado;
    
    system("cls");
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    resultado = somaAteN(num);
    printf("Soma total: %d\n", resultado);
    
    system("PAUSE");
    return 0;
}

int somaAteN(int n)
{
    int i, soma = 0;
    
    for (i = 1; i <= n; i++)
    {
        soma += i;
#ifdef DEBUG
        printf("Somando %d, parcial = %d\n", i, soma);
#endif
    }
    
    return soma;
}


/*Quando o #define DEBUG está habilitado, o pré-processador inclui o trecho do 
printf dentro do código e compila normalmente, exibindo cada etapa do laço na 
tela (útil para achar erros). Ao comentar ou deletar o #define DEBUG, o pré-processador 
entende que a condição falhou e remove aquela instrução do código antes da compilação. 
No executável final em modo normal, esse printf simplesmente deixa de existir, poupando 
processamento na versão de produção.*/