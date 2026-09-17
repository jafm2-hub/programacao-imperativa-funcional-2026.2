#include <stdio.h>

int main()
{
    int num, antecessor, sucessor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int termoA = num;
    int termoS = num; 

    antecessor = --termoA; 
    sucessor = ++termoS;   

    printf("\nNúmero digitado: %d\nAntecessor: %d\nSucessor: %d\n", num,  antecessor, sucessor);
    return 0;
}