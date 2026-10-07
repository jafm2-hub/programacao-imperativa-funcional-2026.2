#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 

{

    char letra_secreta, palpite;
    int tentativas = 0;

    srand(time(NULL));
    letra_secreta = rand() % 26 + 'a';

    printf("--- JOGO DE ADIVINHAÇÃO ---\n");
    printf("Adivinhe a letra secreta entre 'a' e 'z':\n");

    do
    {
        printf("Digite seu palpite: ");
        scanf(" %c", &palpite);

        tentativas++;

        if (palpite < letra_secreta)
        {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto!\n\n", palpite);
        }
        else if (palpite > letra_secreta)
        {
            printf("A letra secreta vem ANTES de '%c' no alfabeto!\n\n", palpite);
        }
        else
        {
            printf("Parabéns! Você acertou a letra secreta ('%c') em %d tentativa(s)!\n", letra_secreta, tentativas);
        }
    } while (palpite != letra_secreta);

    
    system("PAUSE");
    
    
    return 0;
}