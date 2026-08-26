#include <stdio.h>

int main()
{

    int horas;
    int minutos;
    int segundos;
    int numero;
    int minutosRestantes;
    int segundosRestantes;

    printf("Número: ");
    scanf("%d", &numero);

    horas = numero / 3600;
    minutosRestantes = numero % 3600;
    minutos = minutosRestantes / 60;
    segundosRestantes = minutosRestantes % 60;
    segundos = segundosRestantes;


    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
  

    return 0;
}