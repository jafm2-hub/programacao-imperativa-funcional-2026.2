#include <stdio.h>
#include <stdlib.h>

int ehBissexto(int ano);

int main()
{
    int ano;
    
    system("cls");
    
    printf("Digite o ano: ");
    scanf("%d", &ano);
    
    if (ehBissexto(ano))
    {
        printf("O ano %d é bissexto.\n", ano);
    }
    else
    {
        printf("O ano %d não é bissexto.\n", ano);
    }
    
    system("PAUSE");
    return 0;
}

int ehBissexto(int ano)
{
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))
    {
        return 1;
    }
    return 0;
}