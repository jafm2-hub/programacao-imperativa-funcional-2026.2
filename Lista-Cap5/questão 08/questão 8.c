#include <stdio.h>
#include <stdlib.h>

float celsius(float fahr);

int main()
{
    float fahr, cel;
    
    system("cls");
    
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahr);
    
    cel = celsius(fahr);
    printf("Temperatura em Celsius: %.2f\n", cel);
    
    system("PAUSE");
    return 0;
}

float celsius(float fahr)
{
    return (fahr - 32.0) * 5.0 / 9.0;
}