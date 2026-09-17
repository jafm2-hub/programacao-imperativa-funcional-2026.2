#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int d1, d2, d3;

    srand(time(NULL));

    d1 = (rand() % 6) + 1;
    d2 = (rand() % 6) + 1;
    d3 = (rand() % 6) + 1;

    printf("Resultado dos tres dados:\n Dado 1: %d\nDado 2: %d\nDado 3: %d", d1, d2, d3);

    return 0;
}