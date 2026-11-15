#include <stdio.h>
#include <stdlib.h>

long potencia(int base, int expoente);

int main()
{
    int base, expoente;
    
    system("cls");
    
    printf("Digite a base: ");
    scanf("%d", &base);
    
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    
    if (expoente < 0)
    {
        printf("Erro: o expoente não pode ser negativo.\n");
    }
    else
    {
        printf("Resultado: %ld\n", potencia(base, expoente));
    }
    
    system("PAUSE");
    return 0;
}

long potencia(int base, int expoente)
{
    if (expoente == 0)
    {
        return 1;
    }
    return base * potencia(base, expoente - 1);
}


/*O caso base ocorre quando o expoente atinge 0, fazendo a função retornar 1. O passo recursivo 
consiste em multiplicar a base pela próxima chamada recursiva da função, subtraindo 1 do expoente, 
até que ele zere.*/