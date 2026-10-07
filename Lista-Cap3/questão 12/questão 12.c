#include <stdio.h>
#include <stdlib.h>

int main() 

{

    float c, f, k;

    printf("Celsius\tFahrenheit\tKelvin\n");
    printf("----------------------------------------------\n");

    for (c = 0.0; c <= 100.0; c += 5.0)
    {
        f = (9.0 * c) / 5.0 + 32.0;
        k = c + 273.15;
        printf("%.2f\t%.2f\t\t%.2f\n", c, f, k);
    }

    
    system("PAUSE");
    
    
    return 0;
}