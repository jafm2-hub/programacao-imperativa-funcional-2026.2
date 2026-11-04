#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int idade = 65;
    
    if (idade >= 60)
        printf("Idoso\n");
    if (idade >= 18)
        printf("Adulto\n");
    if (idade >= 12)
        printf("Jovem\n");
    else
        printf("Criança\n");

    system("PAUSE");
    return 0;
}