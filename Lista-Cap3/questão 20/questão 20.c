#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int i;

    printf("Decimal\t\tHexadecimal\tCaractere\n");
    printf("------------------------------------------\n");

    for (i = 32; i <= 126; i++)
    {
        printf("%d\t\t%X\t\t%c\n", i, i, (char)i);
    }

    
    system("PAUSE");
    
    
    return 0;
}