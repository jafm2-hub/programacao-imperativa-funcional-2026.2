#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int senha_secreta = 2026;
    int senha_digitada;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 3 && !acertou) {
        printf("Digite a senha secreta: ");
        scanf("%d", &senha_digitada);

        tentativas++;

        if (senha_digitada == senha_secreta) 
        {
            acertou = 1;
            printf("Acesso Concedido!\n");
        } 
        else if (tentativas < 3) 
        {
            printf("Senha incorreta! Tente novamente.\n");
        }
    }

    if (!acertou) 
    {
        printf("Conta Bloqueada por Segurança!\n");
    }

    
    system("PAUSE");
    
    
    return 0;
}