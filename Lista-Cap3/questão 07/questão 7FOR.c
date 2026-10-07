#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int i;

    for (i = 0; i <= 100; i++)
    {
        printf("%d ", i);
    }

    
    system("PAUSE");
    
    
    return 0;
}


/* A estrutura for é a mais adequada para este caso porque o número de 
iterações é previamente conhecido e determinado. O laço for concentra a 
inicialização, a condição de parada e o incremento em uma única linha no 
seu cabeçalho, o que torna o código muito mais organizado, legível 
e compacto em comparação com o while e o do-while. */