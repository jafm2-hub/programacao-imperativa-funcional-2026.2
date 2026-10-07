#include <stdio.h>
#include <stdlib.h>

int main() 

{

    int i = 0, j = 10;

    while (i < j) 
    {
        printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

    
    system("PAUSE");
    
    
    return 0;
}