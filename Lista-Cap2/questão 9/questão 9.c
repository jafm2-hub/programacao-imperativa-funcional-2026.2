#include <stdio.h>

int main()
{
    
    int num1, num2, soma, subtracao, mult;
    float div;
    printf("Digite um número inteiro: ");
    scanf("%d", &num1 );
    printf("Digite outro número inteiro: ");
    scanf("%d", &num2 );
    soma = num1 + num2;
    subtracao = num1 - num2;
    mult = num1 * num2;

    /*Para evitar a divisao por 0, deve-se criar uma estrutura para identificar o valor de b,
    fazendo assim com que so haja a divisao quando b != 0,*/
    div = (float)num1 / num2;
    
    printf("\nsoma: %d\nsubtração: %d\nmultiplicação: %d\ndivisão: %.2f", soma, subtracao, mult, div);


    return 0;
}